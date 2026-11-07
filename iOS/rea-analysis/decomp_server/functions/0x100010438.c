// rea decompile_all
// name: FUN_100010438
// address: 0x100010438
// body: available
// range: 0x100010438-0x1000105ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100010568) */

void FUN_100010438(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_51;
  
  local_78 = (uint)param_3;
  uVar7 = local_78;
  uStack_74 = (uint)((ulong)param_3 >> 0x20);
  uStack_70 = (undefined4)param_4;
  uStack_6c = (undefined4)((ulong)param_4 >> 0x20);
  local_68 = (undefined4)param_5;
  uStack_64 = (undefined4)((ulong)param_5 >> 0x20);
  uStack_80 = uStack_74;
  uStack_7c = uStack_70;
  local_88 = uStack_6c;
  uStack_84 = local_68;
  puVar8 = &DAT_100a75a00;
  FUN_100004bb4(&DAT_100a75a00,&DAT_100809ab0);
  lVar11 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_10003f054();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar10,&DAT_100997940,&DAT_100997940,param_1,uVar1,uVar2);
  local_78 = local_78 & 0xffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_2,&local_78,puVar8);
  uVar6 = uStack_7c;
  uVar5 = uStack_80;
  uVar4 = uStack_84;
  uVar3 = local_88;
  if (unaff_x21 == 0) {
    local_78 = CONCAT31(local_78._1_3_,1);
    uVar9 = param_2 >> 0x20 | (ulong)(uVar7 & 1) << 0x20;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF(uVar9,&local_78,puVar8);
    local_78 = uVar5;
    uStack_74 = uVar6;
    uStack_70 = uVar3;
    uStack_6c = uVar4;
    local_68 = CONCAT31(local_68._1_3_,(char)((ulong)param_5 >> 0x20));
    local_51 = 2;
    FUN_10003f0f4();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_78,&local_51,puVar8,&DAT_1009979b8,uVar9);
    (**(code **)(lVar11 + 8))(puVar10,puVar8);
  }
  else {
    (**(code **)(lVar11 + 8))(puVar10,puVar8);
  }
  return;
}

