// rea decompile_all
// name: FUN_100095444
// address: 0x100095444
// body: available
// range: 0x100095444-0x1000956ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100095444(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_70;
  long local_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = lVar5 - extraout_x12;
  puVar3 = &DAT_100a76718;
  local_68 = lVar5;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar5 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar5 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar10 - extraout_x12_02;
  FUN_100401b14(0);
  FUN_100095700(lVar11,param_1);
  FUN_100095700(lVar10,param_2);
  FUN_10007f314(lVar11,lVar12,&DAT_100a76718,&DAT_10080ccc0);
  pcVar7 = *(code **)(lVar9 + 0x30);
  lVar4 = lVar12;
  (*pcVar7)(lVar12,1,lVar2);
  lVar1 = local_68;
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a76718,&DAT_10080ccc0);
    uVar6 = 0;
    lVar10 = lVar11;
    lVar11 = lVar12;
  }
  else {
    pcVar8 = *(code **)(lVar9 + 0x20);
    (*pcVar8)(local_68,lVar12,lVar2);
    FUN_10007f314(lVar10,lVar5,&DAT_100a76718,&DAT_10080ccc0);
    lVar12 = lVar5;
    (*pcVar7)(lVar5,1,lVar2);
    lVar4 = local_70;
    if ((int)lVar12 == 1) {
      (**(code **)(lVar9 + 8))(lVar1,lVar2);
      FUN_100040bb4(lVar10,&DAT_100a76718,&DAT_10080ccc0);
      uVar6 = 0;
      lVar10 = lVar11;
      lVar11 = lVar5;
    }
    else {
      (*pcVar8)(local_70,lVar5,lVar2);
      lVar5 = lVar1;
      __s10Foundation4DateV1goiySbAC_ACtFZ(lVar1,lVar4);
      uVar6 = (uint)lVar5;
      pcVar7 = *(code **)(lVar9 + 8);
      (*pcVar7)(lVar4,lVar2);
      (*pcVar7)(lVar1,lVar2);
    }
  }
  FUN_100040bb4(lVar10,&DAT_100a76718,&DAT_10080ccc0);
  FUN_100040bb4(lVar11,&DAT_100a76718,&DAT_10080ccc0);
  return uVar6 & 1;
}

