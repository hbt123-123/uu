// rea decompile_all
// name: FUN_100012734
// address: 0x100012734
// body: available
// range: 0x100012734-0x10001291b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000128b0) */
/* WARNING: Removing unreachable block (ram,0x000100012870) */
/* WARNING: Removing unreachable block (ram,0x0001000128c4) */
/* WARNING: Removing unreachable block (ram,0x0001000128d8) */
/* WARNING: Removing unreachable block (ram,0x000100012804) */

void FUN_100012734(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100102a30;
  FUN_10000eb08(&DAT_100102a30,&DAT_1000cf330);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_1000125e4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&DAT_1000f2220,&DAT_1000f2220,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_52 = 1;
    puVar6 = &local_52;
    puVar8 = puVar3;
    local_68 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_53 = 2;
    puVar5 = &local_53;
    local_78 = puVar6;
    local_70 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar3);
    (**(code **)(lVar9 + 8))(auStack_80 + -extraout_x8,puVar3);
    FUN_100001428(param_2);
    *param_1 = local_68;
    param_1[1] = puVar7;
    param_1[2] = local_78;
    param_1[3] = local_70;
    *(byte *)(param_1 + 4) = (byte)puVar5 & 1;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

