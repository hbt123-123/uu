// rea decompile_all
// name: FUN_10065a6cc
// address: 0x10065a6cc
// body: available
// range: 0x10065a6cc-0x10065a887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065a6cc(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  
  cVar4 = (char)param_4;
  if ((param_8 & 0xff) == 0) {
    if (param_6 == 0 && param_7 == 0) goto LAB_10065a794;
LAB_10065a728:
    uVar3 = param_2;
    FUN_10064b1b4(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    if (uVar3 == 0xffffffffffffffff) {
      cVar4 = (char)param_8;
      _swift_bridgeObjectRetain(param_9);
      FUN_10065eb84(param_2,param_3,param_4,param_5,0);
      if ((param_2 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065a888);
        (*pcVar1)();
      }
      if (cVar4 == '\0') {
        bVar2 = param_6 != 0 || param_7 != 0;
      }
      else if (cVar4 == '\x01') {
        bVar2 = true;
      }
      else {
        bVar2 = *(long *)(param_9 + 0x10) != 0;
        cVar4 = '\x02';
      }
      goto LAB_10065a7d4;
    }
    _swift_bridgeObjectRetain(param_5);
    FUN_10065eb84(param_6,param_7,param_8,param_9,0);
    if ((param_6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065a78c);
      (*pcVar1)();
    }
  }
  else {
    if ((((uint)param_8 & 0xff) == 1) || (*(long *)(param_9 + 0x10) != 0)) goto LAB_10065a728;
LAB_10065a794:
    _swift_bridgeObjectRetain(param_5);
    FUN_100642874(param_6,param_7,param_8,param_9,0);
  }
  bVar2 = false;
  param_9 = param_5;
  param_6 = param_2;
  param_7 = param_3;
LAB_10065a7d4:
  param_1[1] = param_7;
  *param_1 = param_6;
  *(char *)(param_1 + 2) = cVar4;
  param_1[3] = param_9;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}

