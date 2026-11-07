// rea decompile_all
// name: FUN_1002bc8fc
// address: 0x1002bc8fc
// body: available
// range: 0x1002bc8fc-0x1002bc9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1002bc8fc(long *param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bc9d4);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(param_4 + 0x10);
      if (uVar5 != 0) {
        uVar6 = 0;
        puVar7 = (undefined8 *)(param_4 + 0x38);
        do {
          if (*(ulong *)(param_4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bc9d0);
            (*pcVar4)();
          }
          uVar2 = puVar7[-2];
          uVar1 = puVar7[-1];
          uVar3 = *puVar7;
          *param_2 = puVar7[-3];
          param_2[1] = uVar2;
          param_2[2] = uVar1;
          param_2[3] = uVar3;
          if (param_3 - 1 == uVar6) {
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar3);
            uVar5 = param_3;
            break;
          }
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar3);
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 4;
          param_2 = param_2 + 4;
        } while (uVar5 != uVar6);
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = uVar5;
  return uVar5;
}

