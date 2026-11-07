// rea decompile_all
// name: FUN_1005327e0
// address: 0x1005327e0
// body: available
// range: 0x1005327e0-0x100532937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005327e0(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  
  if (param_2 == 1) {
    if ((*(byte *)((long)unaff_x20 + 0x11) & 1) == 0) {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005328e4);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005328e8);
        (*pcVar1)();
      }
      FUN_1004f9e80(*unaff_x20,unaff_x20[1]);
    }
    else {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
  }
  else {
    FUN_1004f9e80(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      if (param_1 < 0) {
        uVar4 = unaff_x20[3];
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_100506f84(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        unaff_x20[3] = uVar4;
        param_1 = -param_1;
      }
      FUN_10052badc(param_1);
      return;
    }
  }
  FUN_10052bbb0(param_1);
  return;
}

