// rea decompile_all
// name: FUN_1000d5250
// address: 0x1000d5250
// body: available
// range: 0x1000d5250-0x1000d547f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d5250(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  uVar1 = param_1;
  lVar5 = param_2;
  FUN_1000d5080(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x60));
  if (lVar5 == 0) {
    FUN_10003f030(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
    FUN_1000b142c(unaff_x20 + 0x10,auStack_88);
    puVar2 = &DAT_10099bc28;
    _swift_allocObject(&DAT_10099bc28,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    FUN_1000a0074(auStack_88,puVar2 + 0x20);
    *(undefined8 *)(puVar2 + 0x48) = param_1;
    *(long *)(puVar2 + 0x50) = param_2;
    _swift_retain(param_5);
    _swift_bridgeObjectRetain(param_2);
    FUN_1000d49cc(FUN_1000d5b84,puVar2);
  }
  else {
    puVar2 = (undefined *)0x0;
    FUN_1000d5acc();
    _swift_allocObject();
    puVar3 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar3,"init");
    *(ID *)(puVar2 + 0x10) = IVar4;
    puVar2[0x18] = 0;
    FUN_10003f030(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
    puVar3 = &DAT_10099bc50;
    _swift_allocObject(&DAT_10099bc50,0x40,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(long *)(puVar3 + 0x20) = lVar5;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    *(undefined8 *)(puVar3 + 0x38) = param_5;
    _swift_retain(puVar2);
    _swift_bridgeObjectRetain(lVar5);
    _swift_retain(param_5);
    FUN_1000d4bac(0x3ff0000000000000,FUN_1000d5bc8,puVar3);
    _swift_release(puVar3);
    FUN_10003f030(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
    FUN_1000b142c(unaff_x20 + 0x38,auStack_88);
    FUN_1000b142c(unaff_x20 + 0x10,auStack_b0);
    puVar3 = &DAT_10099bc78;
    _swift_allocObject(&DAT_10099bc78,0x98,7);
    FUN_1000a0074(auStack_88,puVar3 + 0x10);
    *(undefined8 *)(puVar3 + 0x38) = uVar1;
    *(long *)(puVar3 + 0x40) = lVar5;
    *(undefined **)(puVar3 + 0x48) = puVar2;
    FUN_1000a0074(auStack_b0,puVar3 + 0x50);
    *(undefined8 *)(puVar3 + 0x78) = param_1;
    *(long *)(puVar3 + 0x80) = param_2;
    *(undefined8 *)(puVar3 + 0x88) = param_4;
    *(undefined8 *)(puVar3 + 0x90) = param_5;
    _swift_retain(puVar2);
    _swift_retain(param_5);
    _swift_bridgeObjectRetain(param_2);
    FUN_1000d49cc(FUN_1000d5c24,puVar3);
    _swift_release(puVar3);
  }
  _swift_release(puVar2);
  return;
}

