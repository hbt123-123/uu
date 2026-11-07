// rea decompile_all
// name: FUN_1003b40bc
// address: 0x1003b40bc
// body: available
// range: 0x1003b40bc-0x1003b43b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b40bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [55];
  undefined1 local_e1;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined4 local_71;
  
  puVar4 = &DAT_100a8bd20;
  FUN_100004bb4(&DAT_100a8bd20,&DAT_100820b38);
  lVar7 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_120 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003b7ef8();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009b9038,&DAT_1009b9038,param_1,uVar1,uVar2);
  local_e0 = local_e0 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_e0,puVar4);
  if (unaff_x21 == 0) {
    local_e0._0_1_ = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[2],unaff_x20[3],&local_e0,puVar4);
    local_e0._0_1_ = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[4],unaff_x20[5],&local_e0,puVar4);
    local_e0._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[6],&local_e0,puVar4);
    local_e0._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[7],unaff_x20[8],&local_e0,puVar4)
    ;
    local_e0._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[9],unaff_x20[10],&local_e0,puVar4);
    local_e0._0_1_ = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[0xb],unaff_x20[0xc],&local_e0,puVar4);
    local_e0._0_1_ = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF(unaff_x20[0xd],&local_e0,puVar4);
    local_e0._0_1_ = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[0xe],&local_e0,puVar4);
    local_e0._0_1_ = 9;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys6UInt64VSg_xtKF
              (unaff_x20[0xf],*(undefined1 *)(unaff_x20 + 0x10),&local_e0,puVar4);
    local_e0 = CONCAT71(local_e0._1_7_,10);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[0x11],unaff_x20[0x12],&local_e0,puVar4);
    uStack_98 = unaff_x20[0x14];
    local_a0 = unaff_x20[0x13];
    uStack_88 = unaff_x20[0x16];
    local_90 = unaff_x20[0x15];
    uStack_80 = unaff_x20[0x17];
    uStack_78 = (undefined7)unaff_x20[0x18];
    local_71 = *(undefined4 *)((long)unaff_x20 + 199);
    uStack_d8 = unaff_x20[0x14];
    local_e0 = unaff_x20[0x13];
    uStack_c8 = unaff_x20[0x16];
    local_d0 = unaff_x20[0x15];
    local_c0 = unaff_x20[0x17];
    uStack_b8 = (undefined7)unaff_x20[0x18];
    uVar3 = *(undefined4 *)((long)unaff_x20 + 199);
    uStack_b1 = (undefined1)uVar3;
    uStack_b0 = (undefined2)((uint)uVar3 >> 8);
    uStack_ae = (undefined1)((uint)uVar3 >> 0x18);
    local_e1 = 0xb;
    puVar5 = &local_a0;
    FUN_1003b7ea8(puVar5,auStack_118);
    FUN_1003b7f38();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_e0,&local_e1,puVar4,&DAT_1009e6360,puVar5);
    FUN_1001a73e4(local_e0,uStack_d8,local_d0,uStack_c8,local_c0,CONCAT17(uStack_b1,uStack_b8),
                  (ulong)CONCAT12(uStack_ae,uStack_b0));
    (**(code **)(lVar7 + 8))(puVar6,puVar4);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar4);
  }
  return;
}

