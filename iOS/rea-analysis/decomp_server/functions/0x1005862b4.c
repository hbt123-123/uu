// rea decompile_all
// name: FUN_1005862b4
// address: 0x1005862b4
// body: available
// range: 0x1005862b4-0x100586397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005862b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  FUN_100510c38();
  if ((param_4 & 1) != 0) {
    FUN_10056a7c4();
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = 0xffffffffffffffff;
    lVar3 = param_1 + 0x20;
    do {
      if (uVar6 - lVar5 == -1) {
        _swift_bridgeObjectRelease(param_1);
        return 1;
      }
      uVar6 = uVar6 + 1;
      if (*(ulong *)(param_1 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100586398);
        (*pcVar2)();
      }
      FUN_1000b142c(lVar3,auStack_78);
      lVar1 = lStack_58;
      uVar4 = local_60;
      FUN_10003f030(auStack_78,local_60);
      (**(code **)(lVar1 + 0x20))(uVar4,lVar1);
      FUN_10003f094(auStack_78);
      lVar3 = lVar3 + 0x28;
    } while ((uVar4 & 1) != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return 0;
}

