// rea decompile_all
// name: FUN_1001ad2c0
// address: 0x1001ad2c0
// body: available
// range: 0x1001ad2c0-0x1001ad59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001ad46c) */
/* WARNING: Removing unreachable block (ram,0x0001001ad470) */

void FUN_1001ad2c0(byte *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a7cba8;
  FUN_100004bb4(&DAT_100a7cba8,&DAT_100811660);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1001ad5a0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_90 + -extraout_x8,&DAT_1009a23a8,&DAT_1009a23a8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    local_52 = 1;
    puVar6 = &local_52;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar6,puVar3);
    local_53 = 2;
    puVar7 = &local_53;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_68 = SUB84(puVar7,0);
    local_54 = 3;
    puVar7 = &local_54;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_6c = SUB84(puVar7,0);
    local_55 = 4;
    puVar7 = &local_55;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_70 = SUB84(puVar7,0);
    local_56 = 5;
    puVar7 = &local_56;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_74 = SUB84(puVar7,0);
    local_57 = 6;
    puVar7 = &local_57;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_78 = SUB84(puVar7,0);
    local_58 = 7;
    puVar7 = &local_58;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_7c = SUB84(puVar7,0);
    local_61 = 8;
    puVar7 = &local_61;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_80 = SUB84(puVar7,0);
    local_62 = 9;
    puVar7 = &local_62;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_84 = SUB84(puVar7,0);
    local_63 = 10;
    puVar7 = &local_63;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_88 = SUB84(puVar7,0);
    local_64 = 0xb;
    puVar7 = &local_64;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar3);
    local_8c = SUB84(puVar7,0);
    (**(code **)(lVar8 + 8))(auStack_90 + -extraout_x8,puVar3);
    FUN_10003f094(param_2);
    *param_1 = (byte)puVar5 & 1;
    *(int *)(param_1 + 4) = (int)puVar6;
    *(undefined4 *)(param_1 + 8) = local_68;
    *(undefined4 *)(param_1 + 0xc) = local_6c;
    *(undefined4 *)(param_1 + 0x10) = local_70;
    *(undefined4 *)(param_1 + 0x14) = local_74;
    *(undefined4 *)(param_1 + 0x18) = local_78;
    *(undefined4 *)(param_1 + 0x1c) = local_7c;
    *(undefined4 *)(param_1 + 0x20) = local_80;
    *(undefined4 *)(param_1 + 0x24) = local_84;
    *(undefined4 *)(param_1 + 0x28) = local_88;
    *(undefined4 *)(param_1 + 0x2c) = local_8c;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

