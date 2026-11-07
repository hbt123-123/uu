// rea decompile_all
// name: FUN_1000f0918
// address: 0x1000f0918
// body: available
// range: 0x1000f0918-0x1000f0bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000f0918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 auStack_2a8 [224];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_188 [296];
  
  if (DAT_100a73bc8 != -1) {
    _swift_once(&DAT_100a73bc8,FUN_10019b400);
  }
  puVar5 = DAT_100b36290;
  plVar10 = DAT_100b36288;
  puVar6 = DAT_100b36290;
  _swift_bridgeObjectRetain();
  FUN_1003ab578();
  uVar11 = *puVar6;
  _swift_retain(uVar11);
  FUN_1003eaf68(auStack_2a8);
  _swift_release(uVar11);
  _swift_bridgeObjectRetain(uStack_1c0);
  FUN_10009fc58(auStack_2a8);
  if (DAT_100a73bc0 != -1) {
    _swift_once(&DAT_100a73bc0,FUN_10019b380);
  }
  uVar4 = DAT_100b36280;
  uVar11 = DAT_100b36278;
  lVar1 = DAT_100a73bb8;
  _swift_bridgeObjectRetain(DAT_100b36280);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a73bb8,FUN_10019b2f8);
  }
  uVar3 = DAT_100b36270;
  uVar2 = DAT_100b36268;
  uVar12 = *puVar6;
  _swift_bridgeObjectRetain(DAT_100b36270);
  _swift_retain(uVar12);
  FUN_1003eaf68(auStack_188);
  _swift_release();
  FUN_1003de7c8();
  FUN_10009fc58(auStack_188);
  uVar7 = uVar12;
  FUN_100183520();
  _swift_bridgeObjectRelease(uVar12);
  puVar8 = &DAT_100a75ac0;
  FUN_100004bb4(&DAT_100a75ac0,&DAT_100809b50);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined8 *)(puVar8 + 0x20) = 0x72656d6165727473;
  *(undefined8 *)(puVar8 + 0x28) = 0xe800000000000000;
  *(undefined8 *)(puVar8 + 0x30) = param_1;
  *(undefined8 *)(puVar8 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = puVar8;
  FUN_1000cbc40();
  _swift_setDeallocating(puVar8);
  FUN_100040bb4(puVar8 + 0x20,&DAT_100a75ac8,&DAT_100813090);
  uVar12 = 0;
  FUN_1003c17e4(0);
  _swift_allocObject();
  FUN_1003bea40(uVar12,plVar10,puVar5,local_1c8,uStack_1c0,uVar11,uVar4,uVar2,uVar3,uVar7,puVar9);
  puVar8 = &DAT_10099c800;
  _swift_allocObject(&DAT_10099c800,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(undefined8 *)(puVar8 + 0x18) = param_4;
  pcVar13 = *(code **)(*plVar10 + 0x170);
  _swift_bridgeObjectRetain();
  (*pcVar13)(FUN_1000f456c,puVar8);
  _swift_release(puVar8);
  return plVar10;
}

