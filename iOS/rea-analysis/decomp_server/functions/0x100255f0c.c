// rea decompile_all
// name: FUN_100255f0c
// address: 0x100255f0c
// body: available
// range: 0x100255f0c-0x100255ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255ff8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100255f0c(void)

{
  uint uVar1;
  pid_t pVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  size_t local_2c8;
  undefined1 auStack_2c0 [32];
  uint local_2a0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(auStack_2c0,0x288);
  puVar4 = &DAT_100a80048;
  FUN_100004bb4(&DAT_100a80048,&DAT_100814748);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  piVar5 = (int *)(puVar4 + 0x20);
  piVar5[0] = 1;
  piVar5[1] = 0xe;
  *(undefined4 *)(puVar4 + 0x28) = 1;
  pVar2 = _getpid();
  *(pid_t *)(puVar4 + 0x2c) = pVar2;
  local_2c8 = 0x288;
  iVar3 = _sysctl(piVar5,4,auStack_2c0,&local_2c8,(void *)0x0,0);
  _swift_bridgeObjectRelease(puVar4);
  uVar1 = 0;
  if (iVar3 == 0) {
    uVar1 = local_2a0 >> 0xb & 1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}

