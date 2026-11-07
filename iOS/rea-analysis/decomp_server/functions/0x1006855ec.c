// rea decompile_all
// name: FUN_1006855ec
// address: 0x1006855ec
// body: available
// range: 0x1006855ec-0x10068573b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006855ec(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_60 [32];
  
  uVar2 = *(ulong *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  if ((param_3 & 1) == 0) {
    if ((((*(char *)((long)unaff_x20 + 0x31) == '\x03') && (-1 < (long)uVar2)) &&
        (uVar5 = *unaff_x20, (long)uVar2 < *(long *)(uVar5 + 0x10))) &&
       (*(char *)(param_1 + 0x32) == '\x06')) {
      thunk_FUN_100686184(auStack_60);
      uVar4 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar4 & 1) == 0) {
        FUN_10068de2c();
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      FUN_10068e548(param_1);
      if (uVar4 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068573c);
        (*pcVar1)();
      }
      lVar3 = uVar5 + uVar2 * 0x20;
      FUN_10003f094(lVar3 + 0x20);
      FUN_10007f3d4(auStack_60,lVar3 + 0x20);
      *unaff_x20 = uVar5;
      goto LAB_100685708;
    }
  }
  else if ((*(char *)((long)unaff_x20 + 0x31) == '\x04') && (*(char *)(param_1 + 0x32) == '\x06')) {
    thunk_FUN_100686184(auStack_60);
    FUN_100682334(auStack_60,uVar2,lVar3);
  }
  else {
    FUN_10068e56c();
  }
  FUN_10068e548(param_1);
LAB_100685708:
  FUN_10003f094(param_2);
  return;
}

