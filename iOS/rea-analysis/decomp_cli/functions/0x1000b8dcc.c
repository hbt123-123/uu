// rea decompile_all
// name: FUN_1000b8dcc
// address: 0x1000b8dcc
// body: available
// range: 0x1000b8dcc-0x1000b9353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b8dcc(long param_1,ulong param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  undefined *puStack_f8;
  long local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  long local_d0;
  undefined *puStack_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  uint local_94;
  ulong local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  ulong local_58;
  
  puVar5 = &DAT_1001051e0;
  local_a0 = param_3;
  local_94 = param_4;
  local_90 = param_2;
  FUN_10000eb08(&DAT_1001051e0,&BYTE_1000d6e68);
  local_d0 = *(long *)(puVar5 + -8);
  lVar8 = (long)&local_120 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1001051e8;
  local_d8 = lVar8;
  puStack_c8 = puVar5;
  FUN_10000eb08(&DAT_1001051e8,&BYTE_1000d6e70);
  local_e8 = *(long *)(puVar6 + -8);
  lVar8 = lVar8 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1001051f0;
  local_f0 = lVar8;
  puStack_e0 = puVar6;
  FUN_10000eb08(&DAT_1001051f0,&BYTE_1000d6e78);
  local_100 = *(long *)(puVar5 + -8);
  lVar8 = lVar8 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1001051f8;
  local_108 = lVar8;
  puStack_f8 = puVar5;
  FUN_10000eb08(&DAT_1001051f8,&BYTE_1000d6e80);
  local_b0 = *(long *)(puVar6 + -8);
  lVar8 = lVar8 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100105200;
  local_a8 = puVar6;
  FUN_10000eb08(&DAT_100105200,&BYTE_1000d6e88);
  local_118 = *(long *)(puVar5 + -8);
  lVar9 = lVar8 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100105208;
  local_120 = lVar9;
  local_110 = puVar5;
  FUN_10000eb08(&DAT_100105208,&BYTE_1000d6e90);
  local_c0 = *(long *)(puVar6 + -8);
  lVar9 = lVar9 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100105210;
  local_b8 = puVar6;
  FUN_10000eb08(&DAT_100105210,&BYTE_1000d6e98);
  lVar12 = *(long *)(puVar5 + -8);
  lVar13 = lVar9 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100105218;
  FUN_10000eb08(&DAT_100105218,&BYTE_1000d6ea0);
  local_88 = *(long *)(puVar6 + -8);
  lVar11 = lVar13 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_78 = puVar6;
  FUN_10000eba0(param_1,uVar2);
  FUN_1000bc5a8();
  puVar6 = &DAT_1000fbcc0;
  local_80 = lVar11;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar11,&DAT_1000fbcc0,&DAT_1000fbcc0,param_1,uVar2,uVar3);
  uVar1 = local_94 & 0xff;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      local_58 = CONCAT71(local_58._1_7_,1);
      FUN_1000bc728();
      puVar7 = local_78;
      lVar11 = local_80;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (lVar9,&DAT_1000fbde0,&local_58,local_78,&DAT_1000fbde0,puVar6);
      local_58 = local_90;
      FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
      FUN_1000c02c8(&DAT_1001051a0,PTR___sSSSEsWP_1000f0300,PTR___sSayxGSEsSERzlMc_1000f0370);
      puVar5 = local_b8;
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&local_58);
      (**(code **)(local_c0 + 8))(lVar9,puVar5);
      pcVar10 = *(code **)(local_88 + 8);
      goto LAB_1000b932c;
    }
    local_58 = local_58 & 0xffffffffffffff00;
    FUN_1000bc768();
    puVar7 = local_78;
    lVar11 = local_80;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar13,&DAT_1000fbd50,&local_58,local_78,&DAT_1000fbd50,puVar6);
    local_58 = local_90;
    FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
    FUN_1000c02c8(&DAT_1001051a0,PTR___sSSSEsWP_1000f0300,PTR___sSayxGSEsSERzlMc_1000f0370);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&local_58);
    pcVar10 = *(code **)(lVar12 + 8);
    lVar8 = lVar13;
  }
  else {
    if (uVar1 != 2) {
      uVar4 = local_a0 + (ulong)(local_90 >= 2);
      if ((long)-uVar4 < 0 == SCARRY8(~uVar4,(ulong)(local_90 < 2))) {
        if (local_90 != 0 || local_a0 != 0) {
          local_58 = CONCAT71(local_58._1_7_,4);
          FUN_1000bc668();
          puVar7 = local_78;
          lVar11 = local_80;
          lVar8 = local_108;
          __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                    (local_108,&DAT_1000fbeb0,&local_58,local_78,&DAT_1000fbeb0,puVar6);
          puVar5 = puStack_f8;
          lVar9 = local_100;
          goto LAB_1000b9310;
        }
        local_58 = CONCAT71(local_58._1_7_,2);
        FUN_1000bc6e8();
        puVar7 = local_78;
        lVar11 = local_80;
        lVar8 = local_120;
        __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                  (local_120,&DAT_1000fbe00,&local_58,local_78,&DAT_1000fbe00,puVar6);
        pcVar10 = *(code **)(local_118 + 8);
        puVar5 = local_110;
      }
      else {
        if (local_90 == 2 && local_a0 == 0) {
          local_58 = CONCAT71(local_58._1_7_,5);
          FUN_1000bc628();
          puVar7 = local_78;
          lVar11 = local_80;
          lVar8 = local_f0;
          __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                    (local_f0,&DAT_1000fbed0,&local_58,local_78,&DAT_1000fbed0,puVar6);
          puVar5 = puStack_e0;
          lVar9 = local_e8;
        }
        else {
          local_58 = CONCAT71(local_58._1_7_,6);
          FUN_1000bc5e8();
          puVar7 = local_78;
          lVar11 = local_80;
          lVar8 = local_d8;
          __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                    (local_d8,&DAT_1000fbef0,&local_58,local_78,&DAT_1000fbef0,puVar6);
          puVar5 = puStack_c8;
          lVar9 = local_d0;
        }
LAB_1000b9310:
        pcVar10 = *(code **)(lVar9 + 8);
      }
      (*pcVar10)(lVar8,puVar5);
      pcVar10 = *(code **)(local_88 + 8);
      goto LAB_1000b932c;
    }
    local_58 = CONCAT71(local_58._1_7_,3);
    FUN_1000bc6a8();
    puVar7 = local_78;
    lVar11 = local_80;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar8,&DAT_1000fbe90,&local_58,local_78,&DAT_1000fbe90,puVar6);
    puVar5 = local_a8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(local_90,local_a0);
    pcVar10 = *(code **)(local_b0 + 8);
  }
  (*pcVar10)(lVar8,puVar5);
  pcVar10 = *(code **)(local_88 + 8);
LAB_1000b932c:
  (*pcVar10)(lVar11,puVar7);
  return;
}

