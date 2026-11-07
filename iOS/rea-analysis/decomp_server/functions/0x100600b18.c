// rea decompile_all
// name: FUN_100600b18
// address: 0x100600b18
// body: available
// range: 0x100600b18-0x100600ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100600cc4) */
/* WARNING: Removing unreachable block (ram,0x000100600cc8) */

void FUN_100600b18(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
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
  undefined4 local_64;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100aafa28;
  FUN_100004bb4(&DAT_100aafa28,&DAT_100847b38);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_100600530();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_a0 + -extraout_x8,&DAT_1009dd6d0,&DAT_1009dd6d0,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar6 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar6,puVar4);
    local_51 = 1;
    puVar7 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar7,puVar4);
    local_51 = 2;
    puVar8 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar8,puVar4);
    local_51 = 3;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_64 = SUB84(puVar9,0);
    local_51 = 4;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_68 = SUB84(puVar9,0);
    local_51 = 5;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_6c = SUB84(puVar9,0);
    local_51 = 6;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_70 = SUB84(puVar9,0);
    local_51 = 7;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_74 = SUB84(puVar9,0);
    local_51 = 8;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_78 = SUB84(puVar9,0);
    local_51 = 9;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_7c = SUB84(puVar9,0);
    local_51 = 10;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_80 = SUB84(puVar9,0);
    local_51 = 0xb;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_84 = SUB84(puVar9,0);
    local_51 = 0xc;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_88 = SUB84(puVar9,0);
    local_51 = 0xd;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_8c = SUB84(puVar9,0);
    local_51 = 0xe;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_90 = SUB84(puVar9,0);
    local_51 = 0xf;
    puVar9 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar9,puVar4);
    local_94 = SUB84(puVar9,0);
    local_52 = 0x10;
    FUN_100602688();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_51,&DAT_1009dd518,&local_52,puVar4,&DAT_1009dd518,puVar9);
    (**(code **)(lVar10 + 8))(auStack_a0 + -extraout_x8,puVar4);
    uVar3 = local_51;
    FUN_10003f094(param_2);
    *param_1 = (int)puVar6;
    param_1[1] = (int)puVar7;
    param_1[2] = (int)puVar8;
    param_1[3] = local_64;
    param_1[4] = local_68;
    param_1[5] = local_6c;
    param_1[6] = local_70;
    param_1[7] = local_74;
    param_1[8] = local_78;
    param_1[9] = local_7c;
    param_1[10] = local_80;
    param_1[0xb] = local_84;
    param_1[0xc] = local_88;
    param_1[0xd] = local_8c;
    param_1[0xe] = local_90;
    param_1[0xf] = local_94;
    *(undefined1 *)(param_1 + 0x10) = uVar3;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

