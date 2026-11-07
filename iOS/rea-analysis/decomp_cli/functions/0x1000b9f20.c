// rea decompile_all
// name: FUN_1000b9f20
// address: 0x1000b9f20
// body: available
// range: 0x1000b9f20-0x1000ba343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b9f20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_51;
  
  puVar3 = &DAT_100105220;
  FUN_10000eb08(&DAT_100105220,&BYTE_1000d6ea8);
  lVar9 = *(long *)(puVar3 + -8);
  lVar8 = (long)&local_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_1000bd330();
  puVar4 = &DAT_1000fbc30;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar8,&DAT_1000fbc30,&DAT_1000fbc30,param_1,uVar1,uVar2);
  local_51 = 0;
  local_70._0_1_ = *unaff_x20;
  FUN_1000bd370();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_70,&local_51,puVar3,&DAT_1000fba80,puVar4);
  if (unaff_x21 == 0) {
    local_70._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(unaff_x20[1],&local_70,puVar3);
    local_70._0_1_ = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),&local_70,puVar3);
    local_70._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(unaff_x20[0x18],&local_70,puVar3);
    uVar5 = (ulong)(byte)unaff_x20[0x19];
    local_70._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(uVar5,&local_70,puVar3);
    local_70 = CONCAT71(local_70._1_7_,unaff_x20[0x1a]);
    local_51 = 5;
    FUN_1000bd3b0();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_51,puVar3,&DAT_1000fbb10,uVar5);
    local_70 = *(undefined8 *)(unaff_x20 + 0x20);
    local_51 = 6;
    puVar4 = &DAT_100105238;
    FUN_10000eb08(&DAT_100105238,&BYTE_1000d6eb0);
    puVar6 = puVar4;
    FUN_1000bd3f0();
    puVar7 = &local_70;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar7,&local_51,puVar3,puVar4,puVar6);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70 = *(undefined8 *)(unaff_x20 + 0x28);
    local_60 = *(undefined8 *)(unaff_x20 + 0x38);
    local_51 = 7;
    FUN_1000bd460();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_70,&local_51,puVar3,&DAT_1000fb958,puVar7);
    local_70._0_1_ = 8;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),&local_70,puVar3)
    ;
    local_70 = CONCAT71(local_70._1_7_,9);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),&local_70,puVar3)
    ;
    local_70 = *(undefined8 *)(unaff_x20 + 0x60);
    local_51 = 10;
    puVar4 = &DAT_100105198;
    FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
    puVar6 = &DAT_1001051a0;
    FUN_1000c02c8(&DAT_1001051a0,PTR___sSSSEsWP_1000f0300,PTR___sSayxGSEsSERzlMc_1000f0370);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_70,&local_51,puVar3,puVar4,puVar6);
    local_70 = *(undefined8 *)(unaff_x20 + 0x68);
    local_51 = 0xb;
    puVar4 = &DAT_100105250;
    FUN_10000eb08(&DAT_100105250,&BYTE_1000d6eb8);
    puVar6 = &DAT_100105258;
    FUN_1000c0330(&DAT_100105258,PTR___sSSSEsWP_1000f0300,PTR___sSDyxq_GSEsSERzSER_rlMc_1000f02e0);
    puVar7 = &local_70;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar7,&local_51,puVar3,puVar4,puVar6);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
    local_70 = *(undefined8 *)(unaff_x20 + 0x70);
    local_60 = CONCAT71(local_60._1_7_,unaff_x20[0x80]);
    local_51 = 0xc;
    FUN_1000bd4a0();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_70,&local_51,puVar3,&DAT_1000fbba0,puVar7);
    local_70._0_1_ = 0xd;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),&local_70,puVar3)
    ;
    local_70 = CONCAT71(local_70._1_7_,0xe);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),&local_70,puVar3)
    ;
    (**(code **)(lVar9 + 8))(lVar8,puVar3);
  }
  else {
    (**(code **)(lVar9 + 8))(lVar8,puVar3);
  }
  return;
}

