// rea decompile_all
// name: FUN_1001806d8
// address: 0x1001806d8
// body: available
// range: 0x1001806d8-0x10018083f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018083c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001806d8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  uint local_74;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  ulong uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar4 = &DAT_100a75450;
  FUN_100004bb4(&DAT_100a75450,&DAT_1008095e8);
  puVar6 = &DAT_100a74808;
  _swift_initStaticObject();
  FUN_1000960d4();
  FUN_100008184(param_1,param_2);
  FUN_100008184(puVar4,puVar6);
  FUN_100181334(&local_68,param_1,param_2,param_1,param_2,puVar4,puVar6);
  uVar3 = uStack_60;
  uVar2 = local_68;
  if (uStack_60 >> 0x3c < 0xf) {
    FUN_100008184(local_68,uStack_60);
    FUN_100180b34(param_1,param_2);
    uVar1 = ((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8;
    local_74 = uVar1 >> 0x10 | uVar1 << 0x10;
    puVar5 = &local_74;
    puVar7 = auStack_70;
    FUN_1001f8534(puVar5,puVar7);
    __s10Foundation4DataV6appendyyACF();
    FUN_100006cdc(puVar4,puVar6);
    FUN_100006cc8(uVar2,uVar3);
    FUN_100006cdc(puVar5,puVar7);
  }
  else {
    FUN_100006cdc(puVar4,puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    auVar8._8_8_ = uStack_60;
    auVar8._0_8_ = local_68;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

