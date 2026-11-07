// rea decompile_all
// name: FUN_10004dd00
// address: 0x10004dd00
// body: available
// range: 0x10004dd00-0x10004df3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010004de8c) */

void FUN_10004dd00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x21;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  byte bStack_77;
  undefined6 uStack_76;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar11 = &DAT_100103910;
  local_e0 = param_1;
  FUN_10000eb08(&DAT_100103910,&DAT_1000d3238);
  local_d8 = *(long *)(puVar11 + -8);
  local_c8 = puVar11;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar3 = *puVar11;
  FUN_10002f0ec();
  FUN_10006b084(&local_88,0,0xe000000000000000,uVar3,&DAT_1000f31f0,puVar11);
  uVar10 = local_68;
  bVar9 = bStack_77;
  bVar8 = local_78;
  uVar7 = uStack_80;
  uVar6 = local_88;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar12 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10004f174();
  local_d0 = (long)&local_f0 - extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_f0 - extraout_x8,&DAT_1000f6c50,&DAT_1000f6c50,lVar12,uVar1,uVar2);
  lVar12 = local_d8;
  if (unaff_x21 == 0) {
    local_f0 = uVar7;
    local_e8 = (uint)bVar8;
    uStack_e4 = (uint)bVar9;
    puVar11 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    puVar5 = local_c8;
    lVar4 = local_d0;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_88,puVar11);
    (**(code **)(lVar12 + 8))(lVar4,puVar5);
    FUN_10002d0fc(uVar6,local_f0,local_e8,uStack_e4);
    _swift_bridgeObjectRelease(uVar10);
    FUN_100001428(param_2);
    local_e0[1] = uStack_80;
    *local_e0 = local_88;
    local_e0[3] = uStack_70;
    local_e0[2] = CONCAT62(uStack_76,CONCAT11(bStack_77,local_78));
    local_e0[4] = local_68;
  }
  else {
    FUN_10002d0fc(uVar6,uVar7,bVar8,bVar9);
    _swift_bridgeObjectRelease(uVar10);
    FUN_100001428(param_2);
  }
  return;
}

