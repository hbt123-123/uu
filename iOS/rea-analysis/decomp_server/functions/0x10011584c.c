// rea decompile_all
// name: FUN_10011584c
// address: 0x10011584c
// body: available
// range: 0x10011584c-0x100115a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011584c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  dVar7 = param_1;
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_3 != 0) &&
     (*(undefined1 *)(param_3 + _TtC14UURemoteServer22ClipboardMobileManager::isReading) = 0,
     param_5 != 0)) {
    FUN_100115a90(param_4,param_5);
    _CFAbsoluteTimeGetCurrent();
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x36);
    __sSS6appendyySSF(0x1000000000000028,0x800000010088c990);
    puVar4 = &DAT_100a766e8;
    FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
    puVar5 = puVar4;
    _swift_allocObject();
    puVar1 = PTR___sSdN_1009958f0;
    uStack_88 = 2;
    local_90 = 1;
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    puVar2 = PTR___sSds7CVarArgsWP_100995920;
    *(undefined **)(puVar5 + 0x38) = puVar1;
    *(undefined **)(puVar5 + 0x40) = puVar2;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    uVar6 = 0xe400000000000000;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000,puVar5);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0xa1aee8bb80e62073,0xa90000000000003d);
    _swift_allocObject(puVar4,0x48,7);
    *(undefined8 *)(puVar4 + 0x18) = uStack_88;
    *(undefined8 *)(puVar4 + 0x10) = local_90;
    *(undefined **)(puVar4 + 0x38) = puVar1;
    *(undefined **)(puVar4 + 0x40) = puVar2;
    *(double *)(puVar4 + 0x20) = dVar7 - param_1;
    uVar6 = 0xe400000000000000;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    __sSS6appendyySSF(0x73,0xe100000000000000);
    uVar3 = uStack_70;
    uVar6 = local_78;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = uVar6;
    uStack_98 = uVar3;
    FUN_1003fb45c(FUN_1000f4520,auStack_b0,0xd0000000000000ac,0x800000010088c8a0,0xd000000000000012,
                  0x800000010088c9c0,0x68,0);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}

