// rea decompile_all
// name: FUN_1005f18f8
// address: 0x1005f18f8
// body: available
// range: 0x1005f18f8-0x1005f1bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f18f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaeed0;
  local_a0 = param_4;
  local_90 = param_2;
  FUN_100004bb4(&DAT_100aaeed0,&DAT_100844a70);
  local_88 = *(long *)(puVar4 + -8);
  local_80 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_a0 - extraout_x8;
  puVar4 = &DAT_100aaeed8;
  FUN_100004bb4(&DAT_100aaeed8,&DAT_100844a78);
  lVar8 = *(long *)(puVar4 + -8);
  local_98 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  puVar4 = &DAT_100aaeee0;
  FUN_100004bb4(&DAT_100aaeee0,&DAT_100844a80);
  lVar7 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar11 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005f1bbc();
  puVar4 = &DAT_1009dbf20;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar9,&DAT_1009dbf20,&DAT_1009dbf20,param_1,uVar1,uVar2);
  if (param_3 == 0) {
    local_54 = 0;
    FUN_1005f1c3c();
    puVar3 = local_78;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar11,&DAT_1009dbf40,&local_54,local_78,&DAT_1009dbf40,puVar4);
    (**(code **)(lVar8 + 8))(lVar11,local_98);
    (**(code **)(lVar7 + 8))(lVar9,puVar3);
  }
  else {
    local_51 = 1;
    FUN_1005f1bfc();
    puVar3 = local_78;
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar10,&DAT_1009dbfd0,&local_51,local_78,&DAT_1009dbfd0,puVar4);
    puVar4 = local_80;
    local_52 = 0;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(local_90,param_3,&local_52,local_80);
    if (unaff_x21 == 0) {
      local_68 = local_a0;
      local_53 = 1;
      puVar5 = &DAT_100aae0a0;
      FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
      puVar6 = &DAT_100aae0a8;
      FUN_1005da960(&DAT_100aae0a8,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_68,&local_53,puVar4,puVar5,puVar6);
      (**(code **)(local_88 + 8))(lVar10,puVar4);
      (**(code **)(lVar7 + 8))(lVar9,puVar3);
    }
    else {
      (**(code **)(local_88 + 8))(lVar10,puVar4);
      (**(code **)(lVar7 + 8))(lVar9,puVar3);
    }
  }
  return;
}

