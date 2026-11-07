// rea decompile_all
// name: FUN_10004518c
// address: 0x10004518c
// body: available
// range: 0x10004518c-0x1000453e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10004518c(long param_1,long param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_c0 [16];
  undefined *local_b0;
  undefined *puStack_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined *local_88;
  ulong local_80;
  long local_68;
  undefined *local_60;
  undefined *puStack_58;
  
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar10 = PTR___sSiN_100995968;
  if ((param_3 & 1) == 0) {
    puVar3 = PTR___sSiN_100995968;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_68 = param_1;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_60 = puVar3;
    puStack_58 = puVar6;
    __sSS6appendyySSF(0x78,0xe100000000000000);
    local_68 = param_2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar10,puVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = puStack_58;
    puVar10 = local_60;
    uVar9 = (ulong)(param_4 & 1);
    lVar4 = param_1;
    lVar7 = param_2;
    FUN_1000457e0();
    if ((uVar9 & 1) == 0) {
      uVar1 = 0x457972616d697270;
      if (lVar4 != param_1 || lVar7 != param_2) {
        uVar1 = 0x537972616d697270;
      }
      uVar2 = 0xec00000074636178;
      if (lVar4 != param_1 || lVar7 != param_2) {
        uVar2 = 0xed000064656c6163;
      }
      uVar5 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
      local_b0 = puVar10;
      puStack_a8 = puVar8;
      local_90 = (undefined *)CONCAT71(local_90._1_7_,(char)(param_4 & 1));
      local_a0 = lVar4;
      lStack_98 = lVar7;
      local_88 = (undefined *)uVar1;
      local_80 = uVar2;
      FUN_1003fb48c(FUN_100045ca4,auStack_c0,0xd0000000000000a5,0x800000010087cb60,
                    0xd000000000000021,0x800000010087cd50,0x50,0);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1000453c8;
    }
  }
  else {
    puVar8 = (undefined *)0xe300000000000000;
    puVar10 = (undefined *)0x6c696e;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = CONCAT71(local_80._1_7_,(char)param_4) & 0xffffffffffffff01;
  local_90 = puVar10;
  local_88 = puVar8;
  FUN_1003fb48c(FUN_100045c98,&local_a0,0xd0000000000000a5,0x800000010087cb60,0xd000000000000021,
                0x800000010087cd50,0x53,0);
  _swift_bridgeObjectRelease(puVar8);
  lVar7 = 0x438;
  lVar4 = 0x780;
LAB_1000453c8:
  auVar11._8_8_ = lVar7;
  auVar11._0_8_ = lVar4;
  return auVar11;
}

