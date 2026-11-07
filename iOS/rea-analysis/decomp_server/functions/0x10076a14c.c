// rea decompile_all
// name: FUN_10076a14c
// address: 0x10076a14c
// body: available
// range: 0x10076a14c-0x10076a2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076a2dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076a14c(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  exception_ptr *this;
  long local_918;
  undefined4 local_90c;
  undefined8 local_908;
  undefined8 local_900 [154];
  undefined1 local_430 [1000];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_908 = 0;
  local_90c = 0;
  puVar3 = &local_908;
  FUN_10079e954(puVar3,&local_90c);
  ___cxa_current_exception_type();
  if (puVar3 == (undefined8 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)(puVar3[1] & 0x7fffffffffffffff);
    if ((pcVar4 != (char *)0x0) && (iVar2 = _strcmp(pcVar4,"NSException"), iVar2 == 0))
    goto LAB_10076a290;
  }
  FUN_1007656c0(0);
  this = (exception_ptr *)&DAT_100b2d2f8;
  uRam0000000100b2d300 = 0;
  DAT_100b2d2f8 = 0;
  uRam0000000100b2d310 = 0;
  DAT_100b2d308 = 0;
  DAT_100b2d320 = 0;
  _DAT_100b2d318 = 0;
  DAT_100b2d330 = 0;
  DAT_100b2d328 = 0;
  uRam0000000100b2d340 = 0;
  _DAT_100b2d338 = 0;
  uRam0000000100b2d350 = 0;
  _DAT_100b2d348 = 0;
  DAT_100b2d360 = 0;
  _DAT_100b2d358 = 0;
  uRam0000000100b2d370 = 0;
  _DAT_100b2d368 = 0;
  uRam0000000100b2d380 = 0;
  _DAT_100b2d378 = 0;
  uRam0000000100b2d390 = 0;
  _DAT_100b2d388 = 0;
  uRam0000000100b2d3a0 = 0;
  _DAT_100b2d398 = 0;
  uRam0000000100b2d3b0 = 0;
  _DAT_100b2d3a8 = 0;
  uRam0000000100b2d3c0 = 0;
  _DAT_100b2d3b8 = 0;
  uRam0000000100b2d3d0 = 0;
  _DAT_100b2d3c8 = 0;
  uRam0000000100b2d3e0 = 0;
  _DAT_100b2d3d8 = 0;
  uRam0000000100b2d3f0 = 0;
  _DAT_100b2d3e8 = 0;
  uRam0000000100b2d400 = 0;
  _DAT_100b2d3f8 = 0;
  uRam0000000100b2d410 = 0;
  _DAT_100b2d408 = 0;
  uRam0000000100b2d420 = 0;
  _DAT_100b2d418 = 0;
  uRam0000000100b2d430 = 0;
  _DAT_100b2d428 = 0;
  uRam0000000100b2d440 = 0;
  _DAT_100b2d438 = 0;
  uRam0000000100b2d450 = 0;
  _DAT_100b2d448 = 0;
  uRam0000000100b2d460 = 0;
  _DAT_100b2d458 = 0;
  uRam0000000100b2d470 = 0;
  _DAT_100b2d468 = 0;
  uRam0000000100b2d480 = 0;
  _DAT_100b2d478 = 0;
  uRam0000000100b2d490 = 0;
  _DAT_100b2d488 = 0;
  uRam0000000100b2d4a0 = 0;
  _DAT_100b2d498 = 0;
  uRam0000000100b2d4b0 = 0;
  _DAT_100b2d4a8 = 0;
  DAT_100b2d4b8 = 0;
  local_430[0] = 0;
  std::current_exception();
  local_900[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)&DAT_100b2d2f8);
  if (local_918 != 0) {
    DAT_100b2cf48 = 0;
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10076a2f0);
    (*pcVar1)();
  }
  FUN_10076b920(&DAT_100b2cf50,0);
  FUN_1007871b4();
  FUN_10079e6e8();
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = &DAT_100b2d2d1;
  this[0xb] = (exception_ptr)0x0;
  *(undefined1 **)(this + 0x30) = local_430;
  *(undefined **)(this + 0x38) = &DAT_100b2cf50;
  *(char **)(this + 0x68) = pcVar4;
  *(char **)(this + 0x28) = pcVar4;
  *(undefined8 **)(this + 0x10) = local_900;
  FUN_100765730(this);
  std::exception_ptr::~exception_ptr(this);
LAB_10076a290:
  FUN_10079ea7c(local_908,local_90c);
  if (DAT_100b2d2c8 != (code *)0x0) {
    (*DAT_100b2d2c8)();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

