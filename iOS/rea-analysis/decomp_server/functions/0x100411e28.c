// rea decompile_all
// name: FUN_100411e28
// address: 0x100411e28
// body: available
// range: 0x100411e28-0x100412087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100411fe8) */
/* WARNING: Removing unreachable block (ram,0x000100412014) */
/* WARNING: Removing unreachable block (ram,0x000100411ef4) */
/* WARNING: Removing unreachable block (ram,0x000100411f20) */

void FUN_100411e28(byte *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8e518;
  FUN_100004bb4(&DAT_100a8e518,&DAT_1008257a0);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_100412088();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&DAT_1009bced8,&DAT_1009bced8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    local_52 = 1;
    puVar6 = &local_52;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,puVar3);
    puVar7 = &DAT_100a7c740;
    FUN_100004bb4(&DAT_100a7c740,&DAT_1008105b8);
    local_53 = 2;
    puVar8 = &DAT_100a8e520;
    FUN_1004142fc(&DAT_100a8e520,PTR___sSiSesWP_100995998,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_68,puVar7,&local_53,puVar3,puVar7,puVar8);
    local_70 = local_68;
    local_54 = 3;
    puVar9 = &local_54;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar9,puVar3);
    local_74 = SUB84(puVar9,0);
    local_55 = 4;
    puVar10 = &local_55;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    (**(code **)(lVar11 + 8))(auStack_80 + -extraout_x8,puVar3);
    puVar9 = (undefined1 *)0x64;
    if (((ulong)puVar7 & 1) == 0) {
      puVar9 = puVar10;
    }
    FUN_10003f094(param_2);
    *param_1 = (byte)puVar5 & 1;
    *(undefined1 **)(param_1 + 8) = puVar6;
    *(undefined8 *)(param_1 + 0x10) = local_70;
    param_1[0x18] = (byte)local_74 & 1;
    *(undefined1 **)(param_1 + 0x20) = puVar9;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

