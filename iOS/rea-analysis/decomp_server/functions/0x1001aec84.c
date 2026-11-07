// rea decompile_all
// name: FUN_1001aec84
// address: 0x1001aec84
// body: available
// range: 0x1001aec84-0x1001aef23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001aec84(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  lVar1 = _TtC14UURemoteServer15StreamerManager::recreateRoomTask;
  if ((*(byte *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::isSystemSleeping) & 1) == 0) {
    lVar8 = *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::recreateRoomTask);
    if (lVar8 != 0) {
      FUN_100401b14(0);
      _swift_retain(lVar8);
      FUN_1003fb48c(FUN_1001af1f4,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                    0xee0029286d6f6f52,0x7d,0);
      __sScT6cancelyyF(lVar8,PTR___sytN_100995e90 + 8,PTR___ss5NeverON_100995d08,
                       PTR___ss5NeverOs5ErrorsWP_100995d10);
      _swift_release(lVar8);
    }
    *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001af220,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                  0xee0029286d6f6f52,0x81,0);
    puVar2 = &DAT_100a76918;
    FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar8 = 0;
    __sScPMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar8);
    puVar2 = &DAT_1009a2478;
    _swift_allocObject(&DAT_1009a2478,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    __sScMMa(0);
    puVar3 = puVar2;
    _swift_retain();
    __sScM6sharedScMvgZ();
    puVar4 = puVar3;
    FUN_100108448();
    puVar5 = &DAT_1009a2978;
    _swift_allocObject(&DAT_1009a2978,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(undefined **)(puVar5 + 0x20) = puVar2;
    _swift_release(puVar2);
    uVar6 = 0;
    FUN_1000f96dc(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_1008117c0,puVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
    _swift_release(uVar7);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001af1c8,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                  0xee0029286d6f6f52,0x77,0);
  }
  return;
}

