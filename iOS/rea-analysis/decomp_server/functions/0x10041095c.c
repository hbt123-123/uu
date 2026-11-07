// rea decompile_all
// name: FUN_10041095c
// address: 0x10041095c
// body: available
// range: 0x10041095c-0x100410be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100410b78) */

void FUN_10041095c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8e400;
  FUN_100004bb4(&DAT_100a8e400,&DAT_100824d68);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_d0 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_10041297c();
  puVar4 = &DAT_1009bccb0;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar7,&DAT_1009bccb0,&DAT_1009bccb0,param_1,uVar1,uVar2);
  local_51 = 0;
  local_d0._0_1_ = *unaff_x20;
  FUN_1004129bc();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_d0,&local_51,puVar3,&DAT_1009bc8e8,puVar4);
  if (unaff_x21 == 0) {
    local_d0._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
              (*(undefined4 *)(unaff_x20 + 4),&local_d0,puVar3);
    local_d0._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)(unaff_x20 + 8),&local_d0,puVar3);
    local_d0._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 0x10),&local_d0,puVar3);
    local_d0._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 0x18),&local_d0,puVar3);
    local_d0 = CONCAT71(local_d0._1_7_,5);
    puVar5 = &local_d0;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)(unaff_x20 + 0x20),puVar5,puVar3);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x70);
    local_90 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
    local_70 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
    uStack_5f = *(undefined8 *)(unaff_x20 + 0x99);
    uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
    local_b0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x58);
    local_51 = 6;
    FUN_100412660();
    puVar6 = &local_d0;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar6,&local_51,puVar3,&DAT_1009bd2b0,puVar5);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0xb0);
    local_d0 = *(undefined8 *)(unaff_x20 + 0xa8);
    local_51 = 7;
    FUN_1004129fc();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_d0,&local_51,puVar3,&DAT_1009bcb80,puVar6);
    (**(code **)(lVar8 + 8))(lVar7,puVar3);
  }
  else {
    (**(code **)(lVar8 + 8))(lVar7,puVar3);
  }
  return;
}

