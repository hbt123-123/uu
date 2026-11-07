// rea decompile_all
// name: FUN_1003b5548
// address: 0x1003b5548
// body: available
// range: 0x1003b5548-0x1003b593b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b57b8) */

void FUN_1003b5548(long param_1)

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
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [55];
  undefined1 local_121;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  undefined4 local_b1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  
  puVar4 = &DAT_100a8bd80;
  FUN_100004bb4(&DAT_100a8bd80,&DAT_100820b60);
  lVar7 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_160 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003b8d80();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009b8df8,&DAT_1009b8df8,param_1,uVar1,uVar2);
  local_120 = local_120 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_120,puVar4);
  if (unaff_x21 == 0) {
    local_120._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[2],unaff_x20[3],&local_120,puVar4);
    local_120._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[4],unaff_x20[5],&local_120,puVar4);
    local_120._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[6],unaff_x20[7],&local_120,puVar4);
    local_120._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[8],unaff_x20[9],&local_120,puVar4);
    local_120._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF(unaff_x20[10],&local_120,puVar4);
    local_120 = CONCAT71(local_120._1_7_,6);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[0xb],*(undefined1 *)(unaff_x20 + 0xc),&local_120,puVar4);
    uStack_98 = unaff_x20[0xe];
    local_a0 = unaff_x20[0xd];
    uStack_88 = unaff_x20[0x10];
    uStack_90 = unaff_x20[0xf];
    local_80 = unaff_x20[0x11];
    uStack_78 = (undefined7)unaff_x20[0x12];
    uStack_71 = *(undefined4 *)((long)unaff_x20 + 0x97);
    uStack_118 = unaff_x20[0xe];
    local_120 = unaff_x20[0xd];
    uStack_108 = unaff_x20[0x10];
    local_110 = unaff_x20[0xf];
    local_100 = unaff_x20[0x11];
    uStack_f8 = (undefined7)unaff_x20[0x12];
    uVar3 = *(undefined4 *)((long)unaff_x20 + 0x97);
    local_f1 = (undefined1)uVar3;
    uStack_f0 = (undefined2)((uint)uVar3 >> 8);
    uStack_ee = (undefined1)((uint)uVar3 >> 0x18);
    local_121 = 7;
    puVar5 = &local_a0;
    FUN_1003b7ea8(puVar5,auStack_158);
    FUN_1003b7f38();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_120,&local_121,puVar4,&DAT_1009e6360,puVar5);
    FUN_1001a73e4(local_120,uStack_118,local_110,uStack_108,local_100,CONCAT17(local_f1,uStack_f8),
                  (ulong)CONCAT12(uStack_ee,uStack_f0));
    uStack_d8 = unaff_x20[0x15];
    local_e0 = unaff_x20[0x14];
    uStack_c8 = unaff_x20[0x17];
    local_d0 = unaff_x20[0x16];
    uStack_118 = unaff_x20[0x15];
    local_120 = unaff_x20[0x14];
    uStack_108 = unaff_x20[0x17];
    local_110 = unaff_x20[0x16];
    uStack_c0 = unaff_x20[0x18];
    uStack_b8 = (undefined7)unaff_x20[0x19];
    local_b1 = *(undefined4 *)((long)unaff_x20 + 0xcf);
    local_100 = unaff_x20[0x18];
    uStack_f8 = (undefined7)unaff_x20[0x19];
    uVar3 = *(undefined4 *)((long)unaff_x20 + 0xcf);
    local_f1 = (undefined1)uVar3;
    uStack_f0 = (undefined2)((uint)uVar3 >> 8);
    uStack_ee = (undefined1)((uint)uVar3 >> 0x18);
    local_121 = 8;
    FUN_1003b7ea8(&local_e0,auStack_158);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_120,&local_121,puVar4,&DAT_1009e6360,puVar5);
    FUN_1001a73e4(local_120,uStack_118,local_110,uStack_108,local_100,CONCAT17(local_f1,uStack_f8),
                  (ulong)CONCAT12(uStack_ee,uStack_f0));
    local_120._0_1_ = 9;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x1b],unaff_x20[0x1c],&local_120,puVar4);
    local_120._0_1_ = 10;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x1d],unaff_x20[0x1e],&local_120,puVar4);
    local_120 = CONCAT71(local_120._1_7_,0xb);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x1f],unaff_x20[0x20],&local_120,puVar4);
    (**(code **)(lVar7 + 8))(puVar6,puVar4);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar4);
  }
  return;
}

