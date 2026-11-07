// rea decompile_all
// name: FUN_1005f4cd0
// address: 0x1005f4cd0
// body: available
// range: 0x1005f4cd0-0x1005f4eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f4cd0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100aaf058;
  FUN_100004bb4(&DAT_100aaf058,&BYTE_100845040);
  local_78 = *(long *)(puVar3 + -8);
  puStack_70 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_80 - extraout_x8;
  puVar3 = &DAT_100aaf060;
  FUN_100004bb4(&DAT_100aaf060,&BYTE_100845048);
  lVar9 = *(long *)(puVar3 + -8);
  local_80 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  puVar3 = &DAT_100aaf068;
  FUN_100004bb4(&DAT_100aaf068,&BYTE_100845050);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar10 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005f944c();
  puVar4 = &DAT_1009dc900;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar8,&DAT_1009dc900,&DAT_1009dc900,param_1,uVar1,uVar2);
  if ((param_2 & 1) == 0) {
    local_52 = 0;
    FUN_1005f94cc();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar10,&DAT_1009dc920,&local_52,puVar3,&DAT_1009dc920,puVar4);
    pcVar5 = *(code **)(lVar9 + 8);
    puVar4 = local_80;
  }
  else {
    local_51 = 1;
    FUN_1005f948c();
    __ss22KeyedEncodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xts06CodingH0Rd__lF
              (lVar7,&DAT_1009dc940,&local_51,puVar3,&DAT_1009dc940,puVar4);
    pcVar5 = *(code **)(local_78 + 8);
    lVar10 = lVar7;
    puVar4 = puStack_70;
  }
  (*pcVar5)(lVar10,puVar4);
  (**(code **)(lVar6 + 8))(lVar8,puVar3);
  return;
}

