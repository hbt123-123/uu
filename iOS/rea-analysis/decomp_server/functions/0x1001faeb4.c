// rea decompile_all
// name: FUN_1001faeb4
// address: 0x1001faeb4
// body: available
// range: 0x1001faeb4-0x1001fb24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001faeb4(ulong param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_180 [16];
  int local_170;
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  iVar10 = (int)param_1;
  if ((lVar4 != 0) &&
     (*(int *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar10)) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar9 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar9 != 0) &&
       (lVar4 == *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession))
       ) {
      local_158 = *(undefined8 *)(DAT_100b360a8 + 0x88);
      local_148 = 0x7263735f70696c66;
      local_140 = 0xec0000005f6e6565;
      uVar12 = param_2[0x15];
      uVar3 = param_2[0x16];
      uVar11 = param_2[0x17];
      uVar8 = uVar11 >> 0x3c;
      local_160 = 0;
      if (uVar8 < 0xf) {
        local_160 = uVar12;
      }
      uVar1 = 0;
      if (uVar8 < 0xf) {
        uVar1 = uVar3;
      }
      uVar2 = 0xc000000000000000;
      if (uVar8 < 0xf) {
        uVar2 = uVar11;
      }
      local_150 = lVar4;
      _swift_retain(local_158);
      FUN_100040b80(uVar12,uVar3,uVar11);
      FUN_100006cdc(uVar1,uVar2);
      local_88 = local_160;
      puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      uVar1 = local_140;
      uVar3 = local_148;
      puVar5 = &DAT_1009a4ee0;
      _swift_allocObject(&DAT_1009a4ee0,0x18,7);
      _swift_weakInit(puVar5 + 0x10);
      puVar6 = &DAT_1009a4e90;
      _swift_allocObject(&DAT_1009a4e90,0x18,7);
      _swift_unknownObjectWeakInit(puVar6 + 0x10,local_150);
      puVar7 = &DAT_1009a5058;
      _swift_allocObject(&DAT_1009a5058,0xe8,7);
      uVar12 = param_2[0x10];
      uVar14 = param_2[0x13];
      uVar13 = param_2[0x12];
      *(undefined8 *)(puVar7 + 0xb0) = param_2[0x11];
      *(undefined8 *)(puVar7 + 0xa8) = uVar12;
      *(undefined8 *)(puVar7 + 0xc0) = uVar14;
      *(undefined8 *)(puVar7 + 0xb8) = uVar13;
      uVar12 = param_2[0x14];
      uVar14 = param_2[0x17];
      uVar13 = param_2[0x16];
      *(undefined8 *)(puVar7 + 0xd0) = param_2[0x15];
      *(undefined8 *)(puVar7 + 200) = uVar12;
      *(undefined8 *)(puVar7 + 0xe0) = uVar14;
      *(undefined8 *)(puVar7 + 0xd8) = uVar13;
      uVar12 = param_2[8];
      uVar14 = param_2[0xb];
      uVar13 = param_2[10];
      *(undefined8 *)(puVar7 + 0x70) = param_2[9];
      *(undefined8 *)(puVar7 + 0x68) = uVar12;
      *(undefined8 *)(puVar7 + 0x80) = uVar14;
      *(undefined8 *)(puVar7 + 0x78) = uVar13;
      uVar12 = param_2[0xc];
      uVar14 = param_2[0xf];
      uVar13 = param_2[0xe];
      *(undefined8 *)(puVar7 + 0x90) = param_2[0xd];
      *(undefined8 *)(puVar7 + 0x88) = uVar12;
      *(undefined8 *)(puVar7 + 0xa0) = uVar14;
      *(undefined8 *)(puVar7 + 0x98) = uVar13;
      uVar12 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      *(undefined8 *)(puVar7 + 0x30) = param_2[1];
      *(undefined8 *)(puVar7 + 0x28) = uVar12;
      *(undefined8 *)(puVar7 + 0x40) = uVar14;
      *(undefined8 *)(puVar7 + 0x38) = uVar13;
      uVar12 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      *(undefined8 *)(puVar7 + 0x50) = param_2[5];
      *(undefined8 *)(puVar7 + 0x48) = uVar12;
      *(undefined **)(puVar7 + 0x10) = puVar5;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      *(int *)(puVar7 + 0x20) = iVar10;
      *(undefined8 *)(puVar7 + 0x60) = uVar14;
      *(undefined8 *)(puVar7 + 0x58) = uVar13;
      _swift_retain(puVar5);
      _swift_retain(puVar6);
      FUN_1000408d0(param_2,&local_148);
      uVar12 = local_158;
      uVar8 = param_1;
      FUN_100084794(param_1,param_3,param_4 & 1,uVar3,uVar1,FUN_1002038a0,puVar7);
      _swift_release(uVar12);
      _swift_bridgeObjectRelease(uVar1);
      _swift_release(puVar5);
      _swift_release(puVar6);
      _swift_release(puVar7);
      if ((uVar8 & 1) != 0) {
        return;
      }
      FUN_100201820(param_1,param_2,0xffffffff);
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_170 = iVar10;
  FUN_1003fb48c(FUN_1002037ec,auStack_180,0xd0000000000000a0,0x800000010088d990,0xd00000000000002d,
                0x80000001008a2890,299,0);
  return;
}

