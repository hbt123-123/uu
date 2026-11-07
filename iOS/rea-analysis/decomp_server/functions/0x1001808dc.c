// rea decompile_all
// name: FUN_1001808dc
// address: 0x1001808dc
// body: available
// range: 0x1001808dc-0x100180b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100180b30 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001808dc(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *puStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_2 == (undefined *)0x0) {
    puVar5 = &DAT_100a75450;
    FUN_100004bb4(&DAT_100a75450,&DAT_1008095e8);
    puVar4 = &DAT_100a747d8;
    _swift_initStaticObject();
    FUN_1000960d4();
    local_68 = PTR___s10Foundation4DataVN_1009961e8;
    puStack_60 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
    ppuVar6 = &local_80;
    local_90 = param_3;
    uStack_88 = param_4;
    local_80 = puVar5;
    puStack_78 = puVar4;
    FUN_10003f030();
    puVar1 = *ppuVar6;
    puVar2 = ppuVar6[1];
    FUN_100008184(param_3,param_4);
    FUN_100008184(puVar5,puVar4);
    FUN_1001f7dd8(puVar1,puVar2,&local_90);
    FUN_100006cdc(puVar5,puVar4);
    FUN_10003f094(&local_80);
    uVar7 = local_90;
    uVar8 = uStack_88;
  }
  else {
    puVar3 = (undefined8 *)0x28;
    _swift_slowAlloc(0x28,0xffffffffffffffff);
    puStack_78 = (undefined *)puVar3[1];
    local_80 = (undefined *)*puVar3;
    local_70 = puVar3[2];
    puStack_60 = (undefined *)puVar3[4];
    local_68 = (undefined *)puVar3[3];
    ppuVar6 = &local_80;
    _compression_stream_init(ppuVar6,0,0x205);
    if ((int)ppuVar6 != -1) {
      puVar5 = param_2;
      if ((long)param_2 < 0x41) {
        puVar5 = (undefined *)0x40;
      }
      if (0xffff < (long)puVar5) {
        puVar5 = (undefined *)0x10000;
      }
      puVar4 = puVar5;
      _swift_slowAlloc(puVar5,0xffffffffffffffff);
      local_90 = param_3;
      uStack_88 = param_4;
      local_70 = param_1;
      local_68 = param_2;
      FUN_100008184(param_3,param_4);
      while( true ) {
        ppuVar6 = &local_80;
        local_80 = puVar4;
        puStack_78 = puVar5;
        _compression_stream_process(ppuVar6,1);
        if ((int)ppuVar6 != 0) break;
        if (puStack_78 != (undefined *)0x0) goto LAB_100180ac4;
        if (local_80 != puVar4) {
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(puVar4);
        }
      }
      if ((int)ppuVar6 == 1) {
        if (local_80 != puVar4) {
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(puVar4);
        }
        uVar8 = uStack_88;
        uVar7 = local_90;
        _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
        _compression_stream_destroy(&local_80);
        _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
        goto LAB_100180afc;
      }
LAB_100180ac4:
      FUN_100006cdc(local_90,uStack_88);
      _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
      _compression_stream_destroy(&local_80);
    }
    _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    uVar7 = 0;
    uVar8 = 0xf000000000000000;
  }
LAB_100180afc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7,uVar8);
}

