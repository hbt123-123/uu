// rea decompile_all
// name: FUN_1004165bc
// address: 0x1004165bc
// body: available
// range: 0x1004165bc-0x10041692f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100416778) */
/* WARNING: Removing unreachable block (ram,0x00010041677c) */

void FUN_1004165bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100a8e690;
  FUN_100004bb4(&DAT_100a8e690,&DAT_100825cc0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = param_3;
  FUN_10003f030(param_3,uVar7);
  FUN_100416518();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_d0 - extraout_x8,&DAT_1009bd380,&DAT_1009bd380,lVar2,uVar7,uVar8);
  if (unaff_x21 == 0) {
    local_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_51,puVar1);
    local_52 = 1;
    uVar7 = param_2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_52,puVar1);
    local_53 = 2;
    uVar8 = uVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_53,puVar1);
    local_54 = 3;
    uVar9 = uVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_54,puVar1);
    local_55 = 4;
    uVar10 = uVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_55,puVar1);
    local_56 = 5;
    uVar11 = uVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_56,puVar1);
    local_57 = 6;
    uVar12 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_57,puVar1);
    local_58 = 7;
    uVar13 = uVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_58,puVar1);
    local_a1 = 8;
    local_b0 = uVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_a1,puVar1);
    local_a2 = 9;
    uVar14 = uVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_a2,puVar1);
    local_a3 = 10;
    local_b8 = uVar14;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_a3,puVar1);
    local_a4 = 0xb;
    puVar3 = &local_a4;
    local_c0 = uVar14;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar3,puVar1);
    local_a5 = 0xc;
    puVar4 = &local_a5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar4,puVar1);
    local_a6 = 0xd;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_a6,puVar1);
    local_a7 = 0xe;
    puVar5 = &local_a7;
    local_c8 = uVar14;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar5,puVar1);
    local_d0 = puVar5;
    (**(code **)(lVar6 + 8))((long)&local_d0 - extraout_x8,puVar1);
    FUN_10003f094(param_3);
    *param_1 = param_2;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1[4] = uVar10;
    param_1[5] = uVar11;
    param_1[6] = uVar12;
    param_1[7] = local_b0;
    param_1[8] = uVar13;
    param_1[9] = local_b8;
    param_1[10] = local_c0;
    param_1[0xb] = puVar3;
    param_1[0xc] = puVar4;
    param_1[0xd] = local_c8;
    param_1[0xe] = local_d0;
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

