// rea decompile_all
// name: FUN_1006a0ab4
// address: 0x1006a0ab4
// body: available
// range: 0x1006a0ab4-0x1006a0c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0c3c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0ab4(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long local_4078;
  char local_4070;
  undefined1 auStack_4068 [32];
  char acStack_4048 [16384];
  long local_48;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(acStack_4048,0x4000);
  FUN_1006929f8(auStack_4068,acStack_4048,0,0x4000);
  FUN_1006a7874(param_2,param_3,auStack_4068);
  local_4078 = param_1 + 0xf0;
  local_4070 = '\0';
  FUN_100696f64(&local_4078);
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    FUN_1006a88b8();
    FUN_100692c98();
    if (0x1dfff < uVar2) {
      FUN_1006a88b8();
      FUN_100692c98();
      iVar1 = _snprintf(acStack_4048,0x4000,
                        "[F][ sg_buffer_async.Length() >= BUFFER_BLOCK_LENTH*4/5, len: %d\n");
      FUN_100692dd4(auStack_4068,(long)iVar1,(long)iVar1);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    puVar3 = auStack_4068;
    FUN_100692ca0(puVar3);
    puVar4 = auStack_4068;
    FUN_100692c98(puVar4);
    FUN_1006a8a90(uVar5,puVar3,(ulong)puVar4 & 0xffffffff);
    if ((int)uVar5 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x78);
      FUN_1006a88b8();
      FUN_100692c98();
      if ((0x18 < uVar2 >> 0xb) || ((param_2 != (int *)0x0 && (*param_2 == 5)))) {
        FUN_1006a0c98(param_1 + 0x1b8,0);
      }
    }
  }
  if (local_4070 == '\x01') {
    FUN_1006972a0(&local_4078);
  }
  FUN_100692a48(auStack_4068);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

