// rea decompile_all
// name: FUN_1005e6844
// address: 0x1005e6844
// body: available
// range: 0x1005e6844-0x1005e6fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e6844(long param_1,long param_2,long param_3,byte param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 *puVar9;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *pcVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined *local_118;
  undefined1 *local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_70 [2];
  undefined1 local_51;
  
  puVar3 = &DAT_100aae6d0;
  local_98 = param_3;
  local_90 = param_2;
  FUN_100004bb4(&DAT_100aae6d0,&DAT_100840b60);
  local_b0 = *(long *)(puVar3 + -8);
  local_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_140 + -extraout_x8;
  puVar3 = &DAT_100aae6d8;
  local_c8 = puVar9;
  FUN_100004bb4(&DAT_100aae6d8,&DAT_100840b68);
  local_f0 = *(long *)(puVar3 + -8);
  local_d8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aae6e0;
  local_f8 = puVar9 + -extraout_x8_00;
  FUN_100004bb4(&DAT_100aae6e0,&DAT_100840b70);
  local_b8 = *(long *)(puVar3 + -8);
  local_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(puVar9 + -extraout_x8_00) - extraout_x8_01;
  puVar3 = &DAT_100aae6e8;
  local_d0 = lVar8;
  FUN_100004bb4(&DAT_100aae6e8,&DAT_100840b78);
  local_e0 = *(long *)(puVar3 + -8);
  local_c0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_02;
  puVar3 = &DAT_100aae6f0;
  local_e8 = lVar8;
  FUN_100004bb4(&DAT_100aae6f0,&DAT_100840b80);
  local_108 = *(long *)(puVar3 + -8);
  local_100 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = (undefined1 *)(lVar8 - extraout_x8_03);
  puVar3 = &DAT_100aae6f8;
  local_110 = puVar9;
  FUN_100004bb4(&DAT_100aae6f8,&DAT_100840b88);
  local_128 = *(long *)(puVar3 + -8);
  local_118 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = puVar9 + -extraout_x8_04;
  puVar3 = &DAT_100aae700;
  FUN_100004bb4(&DAT_100aae700,&DAT_100840b90);
  local_130 = *(long *)(puVar3 + -8);
  local_120 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100aae708;
  local_138 = (long)puVar9 - extraout_x8_05;
  FUN_100004bb4(&DAT_100aae708,&DAT_100840b98);
  lVar12 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)puVar9 - extraout_x8_05) - extraout_x8_06;
  puVar4 = &DAT_100aae710;
  FUN_100004bb4(&DAT_100aae710,&DAT_100840ba0);
  lVar8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar6);
  FUN_1005ec3f8();
  puVar5 = &DAT_1009da550;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar13 - extraout_x8_07,&DAT_1009da550,&DAT_1009da550,param_1,uVar6,uVar1);
  if (param_4 < 4) {
    if (1 < param_4) {
      if (param_4 == 2) {
        local_70[0] = CONCAT71(local_70[0]._1_7_,2);
        FUN_1005ec5b8();
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (puVar9,&DAT_1009da700,local_70,puVar4,&DAT_1009da700,puVar5);
        puVar3 = local_118;
        __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90);
        lVar12 = local_128;
      }
      else {
        local_70[0] = CONCAT71(local_70[0]._1_7_,3);
        FUN_1005ec578();
        puVar9 = local_110;
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (local_110,&DAT_1009da790,local_70,puVar4,&DAT_1009da790,puVar5);
        puVar3 = local_100;
        __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(local_90,local_98);
        lVar12 = local_108;
      }
LAB_1005e6f5c:
      (**(code **)(lVar12 + 8))(puVar9,puVar3);
      pcVar10 = *(code **)(lVar8 + 8);
      goto LAB_1005e6f7c;
    }
    if (param_4 == 0) {
      local_70[0] = (ulong)local_70[0]._1_7_ << 8;
      FUN_1005ec638();
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (lVar13,&DAT_1009da5e0,local_70,puVar4,&DAT_1009da5e0,puVar5);
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90);
      (**(code **)(lVar12 + 8))(lVar13,puVar3);
      pcVar10 = *(code **)(lVar8 + 8);
      goto LAB_1005e6f7c;
    }
    local_70[0] = CONCAT71(local_70[0]._1_7_,1);
    FUN_1005ec5f8();
    lVar12 = local_138;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (local_138,&DAT_1009da670,local_70,puVar4,&DAT_1009da670,puVar5);
    local_70[0] = local_90;
    FUN_1005faacc(0);
    FUN_100005c90(&DAT_100aae768,FUN_1005faacc,&TargetProtocolConformanceDescriptor_100845670);
    puVar3 = local_120;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(local_70);
    lVar11 = local_130;
  }
  else {
    if (5 < param_4) {
      if (param_4 == 6) {
        local_70[0] = CONCAT71(local_70[0]._1_7_,6);
        FUN_1005ec478();
        puVar9 = local_f8;
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (local_f8,&DAT_1009da940,local_70,puVar4,&DAT_1009da940,puVar5);
        puVar3 = local_d8;
        __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90);
        lVar12 = local_f0;
      }
      else {
        local_70[0] = CONCAT71(local_70[0]._1_7_,7);
        FUN_1005ec438();
        puVar9 = local_c8;
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (local_c8,&DAT_1009da9d0,local_70,puVar4,&DAT_1009da9d0,puVar5);
        puVar3 = local_a8;
        __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90);
        lVar12 = local_b0;
      }
      goto LAB_1005e6f5c;
    }
    if (param_4 == 4) {
      local_70[0]._0_1_ = param_4;
      FUN_1005ec538();
      lVar12 = local_e8;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_e8,&DAT_1009da820,local_70,puVar4,&DAT_1009da820,puVar5);
      puVar3 = local_c0;
      local_70[0] = (ulong)local_70[0]._1_7_ << 8;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90,local_70,local_c0);
      lVar11 = local_e0;
      if (unaff_x21 == 0) {
        local_70[0] = local_98;
        local_51 = 1;
        uVar6 = 0;
        FUN_1005fac18(0);
        puVar5 = &DAT_100aae748;
        FUN_100005c90(&DAT_100aae748,FUN_1005fac18,&TargetProtocolConformanceDescriptor_1008456c0);
        __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                  (local_70,&local_51,puVar3,uVar6,puVar5);
        lVar11 = local_e0;
      }
    }
    else {
      local_70[0]._0_1_ = 5;
      FUN_1005ec4b8();
      lVar12 = local_d0;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_d0,&DAT_1009da8b0,local_70,puVar4,&DAT_1009da8b0,puVar5);
      lVar2 = local_90;
      puVar3 = local_a0;
      local_70[0] = (ulong)local_70[0]._1_7_ << 8;
      lVar7 = local_90;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt32V_xtKF(local_90,local_70,local_a0);
      lVar11 = local_b8;
      if (unaff_x21 == 0) {
        local_70[0] = CONCAT71(local_70[0]._1_7_,(char)((ulong)lVar2 >> 0x20));
        local_51 = 1;
        FUN_1005ec4f8();
        __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                  (local_70,&local_51,puVar3,&DAT_1009dc600,lVar7);
        lVar11 = local_b8;
      }
    }
  }
  (**(code **)(lVar11 + 8))(lVar12,puVar3);
  pcVar10 = *(code **)(lVar8 + 8);
LAB_1005e6f7c:
  (*pcVar10)(lVar13 - extraout_x8_07,puVar4);
  return;
}

