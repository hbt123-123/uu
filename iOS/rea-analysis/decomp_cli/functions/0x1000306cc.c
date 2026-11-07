// rea decompile_all
// name: FUN_1000306cc
// address: 0x1000306cc
// body: available
// range: 0x1000306cc-0x1000308df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100030828) */

void FUN_1000306cc(undefined8 *param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  undefined8 *local_e0;
  long local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_e0 = param_1;
  local_c0 = param_5;
  FUN_10000eb08(param_3,param_4);
  local_d8 = *(long *)(param_3 + -8);
  local_d0 = param_3;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar3 = *param_3;
  FUN_10002f0ec();
  FUN_10006b084(&local_88,0,0xe000000000000000,uVar3,&DAT_1000f31f0,param_3);
  uVar8 = local_68;
  uVar7 = uStack_77;
  uVar3 = local_78;
  uVar6 = uStack_80;
  local_c8 = local_88;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar9 = param_2;
  FUN_10000eba0(param_2,uVar1);
  (*local_c0)();
  local_c0 = (code *)((long)&local_e0 - extraout_x8);
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_e0 - extraout_x8,param_6,param_6,lVar9,uVar1,uVar2);
  uVar1 = local_c8;
  lVar9 = local_d8;
  if (unaff_x21 == 0) {
    puVar10 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_100030920();
    pcVar5 = local_c0;
    puVar4 = local_d0;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_88,puVar10);
    (**(code **)(lVar9 + 8))(pcVar5,puVar4);
    FUN_10002d0fc(uVar1,uVar6,uVar3,uVar7);
    _swift_bridgeObjectRelease(uVar8);
    FUN_100001428(param_2);
    local_e0[1] = uStack_80;
    *local_e0 = local_88;
    local_e0[3] = uStack_70;
    local_e0[2] = CONCAT62(uStack_76,CONCAT11(uStack_77,local_78));
    local_e0[4] = local_68;
  }
  else {
    FUN_10002d0fc(local_c8,uVar6,uVar3,uVar7);
    _swift_bridgeObjectRelease(uVar8);
    FUN_100001428(param_2);
  }
  return;
}

