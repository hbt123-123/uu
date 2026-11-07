// rea decompile_all
// name: FUN_100180edc
// address: 0x100180edc
// body: available
// range: 0x100180edc-0x10018106f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018106c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100180edc(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_2 < 1) {
    uStack_78 = 0xf000000000000000;
    goto LAB_100181034;
  }
  plVar2 = (long *)0x28;
  _swift_slowAlloc(0x28,0xffffffffffffffff);
  lStack_68 = plVar2[1];
  local_70 = *plVar2;
  local_60 = plVar2[2];
  lStack_50 = plVar2[4];
  local_58 = plVar2[3];
  plVar3 = &local_70;
  _compression_stream_init(plVar3,1,0x205);
  if ((int)plVar3 == -1) {
LAB_10018101c:
    uStack_78 = 0xf000000000000000;
  }
  else {
    lVar4 = 0x10000;
    _swift_slowAlloc(0x10000,0xffffffffffffffff);
    uStack_78 = 0xc000000000000000;
    local_60 = param_1;
    local_58 = param_2;
    while( true ) {
      lStack_68 = 0x10000;
      plVar3 = &local_70;
      local_70 = lVar4;
      _compression_stream_process(plVar3,1);
      if ((int)plVar3 != 0) break;
      if (lStack_68 != 0) goto LAB_100180ffc;
      if (local_70 != lVar4) {
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(lVar4);
      }
    }
    if ((int)plVar3 != 1) {
LAB_100180ffc:
      FUN_100006cdc(0,0xc000000000000000);
      _swift_slowDealloc(lVar4,0xffffffffffffffff,0xffffffffffffffff);
      _compression_stream_destroy(&local_70);
      goto LAB_10018101c;
    }
    if (local_70 != lVar4) {
      __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(lVar4);
    }
    _swift_slowDealloc(lVar4,0xffffffffffffffff,0xffffffffffffffff);
    _compression_stream_destroy(&local_70);
  }
  _swift_slowDealloc(plVar2,0xffffffffffffffff,0xffffffffffffffff);
LAB_100181034:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_78;
    return auVar1 << 0x40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

