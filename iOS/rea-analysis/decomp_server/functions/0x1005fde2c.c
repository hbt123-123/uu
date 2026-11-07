// rea decompile_all
// name: FUN_1005fde2c
// address: 0x1005fde2c
// body: available
// range: 0x1005fde2c-0x1005fe177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005fdf8c) */

void FUN_1005fde2c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined1 local_78 [23];
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = &DAT_100aaf940;
  FUN_100004bb4(&DAT_100aaf940,&BYTE_100847398);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_c0 - extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar4);
  FUN_1005fe178();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar7,&DAT_1009dd7f0,&DAT_1009dd7f0,param_1,uVar4,uVar1);
  local_c0 = local_c0 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_c0,puVar2);
  if (unaff_x21 == 0) {
    local_78[0] = *(undefined1 *)((long)unaff_x20 + 0x14);
    local_c0 = CONCAT71(local_c0._1_7_,1);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF
              ((ulong)*(uint5 *)(unaff_x20 + 2),&local_c0,puVar2);
    uStack_58 = unaff_x20[4];
    local_60 = unaff_x20[3];
    uStack_b8 = unaff_x20[4];
    local_c0 = unaff_x20[3];
    local_61 = 2;
    puVar3 = &local_60;
    FUN_10007f314(puVar3,local_78,&DAT_100aaf950,&BYTE_1008473a0);
    FUN_1005f90f4();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_c0,&local_61,puVar2,PTR___s10Foundation4DataVN_1009961e8,puVar3);
    FUN_100006cc8(local_c0,uStack_b8);
    local_c0._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
              (*(undefined4 *)(unaff_x20 + 5),&local_c0,puVar2);
    local_c0._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
              (*(undefined4 *)((long)unaff_x20 + 0x2c),&local_c0,puVar2);
    local_c0._0_1_ = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[6],&local_c0,puVar2);
    local_c0._0_1_ = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[7],unaff_x20[8],&local_c0,puVar2);
    uVar4 = unaff_x20[9];
    local_c0 = CONCAT71(local_c0._1_7_,7);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys6UInt64VSg_xtKF
              (uVar4,*(undefined1 *)(unaff_x20 + 10),&local_c0,puVar2);
    uStack_a8 = *(undefined8 *)((long)unaff_x20 + 0x6c);
    uStack_b0 = *(undefined8 *)((long)unaff_x20 + 100);
    uStack_98 = *(undefined8 *)((long)unaff_x20 + 0x7c);
    local_a0 = *(undefined8 *)((long)unaff_x20 + 0x74);
    uStack_88 = *(undefined8 *)((long)unaff_x20 + 0x8c);
    uStack_90 = *(undefined8 *)((long)unaff_x20 + 0x84);
    local_80 = *(undefined1 *)((long)unaff_x20 + 0x94);
    uStack_b8 = *(undefined8 *)((long)unaff_x20 + 0x5c);
    local_c0 = *(ulong *)((long)unaff_x20 + 0x54);
    local_78[0] = 8;
    FUN_1005e8a8c();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_c0,local_78,puVar2,&DAT_1009dd440,uVar4);
    local_c0 = unaff_x20[0x13];
    local_78[0] = 9;
    puVar5 = &DAT_100aaf958;
    FUN_100004bb4(&DAT_100aaf958,&BYTE_1008473a8);
    puVar6 = &DAT_100aaf960;
    FUN_100602728(&DAT_100aaf960,FUN_1005fe1b8,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_c0,local_78,puVar2,puVar5,puVar6);
    local_c0 = CONCAT71(local_c0._1_7_,10);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0x14],unaff_x20[0x15],&local_c0,puVar2);
    (**(code **)(lVar8 + 8))(lVar7,puVar2);
  }
  else {
    (**(code **)(lVar8 + 8))(lVar7,puVar2);
  }
  return;
}

