// rea decompile_all
// name: FUN_1005f3f34
// address: 0x1005f3f34
// body: available
// range: 0x1005f3f34-0x1005f4217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f3f34(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  ulong local_78;
  long local_70;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaefb8;
  local_78 = param_2;
  FUN_100004bb4(&DAT_100aaefb8,&BYTE_100844ff8);
  local_88 = *(long *)(puVar4 + -8);
  local_80 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaefc0;
  local_90 = (long)&local_a0 - extraout_x8;
  FUN_100004bb4(&DAT_100aaefc0,&BYTE_100845000);
  local_a0 = *(long *)(puVar4 + -8);
  local_98 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)&local_a0 - extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100aaefc8;
  FUN_100004bb4(&DAT_100aaefc8,&BYTE_100845008);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar11 - extraout_x8_01;
  puVar5 = &DAT_100aaefd0;
  FUN_100004bb4(&DAT_100aaefd0,&BYTE_100845010);
  local_70 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_02;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005f86fc();
  uVar3 = local_78;
  puVar6 = &DAT_1009dcba0;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar9,&DAT_1009dcba0,&DAT_1009dcba0,param_1,uVar1,uVar2);
  if ((uVar3 & 0xff00000000) == 0) {
    local_53 = 0;
    FUN_1005f87bc();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar8,&DAT_1009dcc30,&local_53,puVar5,&DAT_1009dcc30,puVar6);
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar3);
    (**(code **)(lVar10 + 8))(lVar8,puVar4);
    (**(code **)(local_70 + 8))(lVar9,puVar5);
  }
  else {
    if (((uint)(uVar3 >> 0x20) & 0xff) == 1) {
      local_52 = (undefined1)(uVar3 >> 0x20);
      FUN_1005f877c();
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (lVar11,&DAT_1009dccc0,&local_52,puVar5,&DAT_1009dccc0,puVar6);
      puVar4 = local_98;
      __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar3);
      pcVar7 = *(code **)(local_a0 + 8);
    }
    else {
      local_51 = 2;
      FUN_1005f873c();
      lVar11 = local_90;
      __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
                (local_90,&DAT_1009dcd50,&local_51,puVar5,&DAT_1009dcd50,puVar6);
      puVar4 = local_80;
      __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar3);
      pcVar7 = *(code **)(local_88 + 8);
    }
    (*pcVar7)(lVar11,puVar4);
    (**(code **)(local_70 + 8))(lVar9,puVar5);
  }
  return;
}

