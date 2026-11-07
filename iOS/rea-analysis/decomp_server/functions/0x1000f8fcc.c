// rea decompile_all
// name: FUN_1000f8fcc
// address: 0x1000f8fcc
// body: available
// range: 0x1000f8fcc-0x1000f9213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f8fcc(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *in_x4;
  long extraout_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [112];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = _TtC14UURemoteServer17LockScreenManager::unlockingLock;
  lVar4 = *(long *)(DAT_100b360a8 + 0x70);
  _objc_msgSend(*(ID *)(lVar4 + _TtC14UURemoteServer17LockScreenManager::unlockingLock),"lock");
  if ((*(byte *)(lVar4 + _TtC14UURemoteServer17LockScreenManager::isUnlocking) & 1) == 0) {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer17LockScreenManager::isUnlocking) = 1;
    _objc_msgSend(*(ID *)(lVar4 + lVar2),"unlock");
    puVar1 = &DAT_100a76918;
    FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar2 = 0;
    __sScPMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_c0 + -extraout_x8,1,1,lVar2);
    puVar1 = &DAT_10099c9f8;
    _swift_allocObject(&DAT_10099c9f8,0x18,7);
    _swift_weakInit(puVar1 + 0x10);
    puVar3 = &DAT_10099ca20;
    _swift_allocObject(&DAT_10099ca20,0x9c,7);
    uVar7 = in_x4[5];
    uVar6 = in_x4[4];
    uVar5 = in_x4[6];
    *(undefined8 *)(puVar3 + 0x60) = in_x4[7];
    *(undefined8 *)(puVar3 + 0x58) = uVar5;
    uVar5 = in_x4[8];
    uVar9 = in_x4[0xb];
    uVar8 = in_x4[10];
    *(undefined8 *)(puVar3 + 0x70) = in_x4[9];
    *(undefined8 *)(puVar3 + 0x68) = uVar5;
    *(undefined8 *)(puVar3 + 0x80) = uVar9;
    *(undefined8 *)(puVar3 + 0x78) = uVar8;
    uVar5 = in_x4[0xc];
    *(undefined8 *)(puVar3 + 0x90) = in_x4[0xd];
    *(undefined8 *)(puVar3 + 0x88) = uVar5;
    uVar5 = *in_x4;
    uVar9 = in_x4[3];
    uVar8 = in_x4[2];
    *(undefined8 *)(puVar3 + 0x30) = in_x4[1];
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = uVar9;
    *(undefined8 *)(puVar3 + 0x38) = uVar8;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    *(undefined8 *)(puVar3 + 0x50) = uVar7;
    *(undefined8 *)(puVar3 + 0x48) = uVar6;
    *(undefined4 *)(puVar3 + 0x98) = param_1;
    FUN_1000fbc24(in_x4,auStack_c0);
    FUN_1000f96dc(0,0,auStack_c0 + -extraout_x8,&DAT_10080d650,puVar3);
    _swift_release();
  }
  else {
    _objc_msgSend(*(ID *)(lVar4 + lVar2),"unlock");
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000f9214,0,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002e,
                  0x8000000100889a00,0x10a,0);
  }
  return;
}

