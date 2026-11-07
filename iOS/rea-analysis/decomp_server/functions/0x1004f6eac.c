// rea decompile_all
// name: FUN_1004f6eac
// address: 0x1004f6eac
// body: available
// range: 0x1004f6eac-0x1004f71bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f7140) */

void FUN_1004f6eac(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TargetProtocolDescriptor *pTVar8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_150 [40];
  undefined1 *local_128;
  TargetProtocolDescriptor *local_120;
  undefined *local_118 [3];
  undefined *local_100;
  undefined **local_f8;
  undefined1 auStack_f0 [24];
  long local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  char local_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1004f75cc(unaff_x20 + 0x20,&local_98);
  if ((local_70 == '\0') || (local_70 == '\x01')) {
    FUN_1004f9868(&local_98);
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(uVar7);
  uVar6 = uVar7;
  FUN_1005188b8();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = uVar6;
  FUN_100519568();
  _swift_bridgeObjectRelease(uVar6);
  if (lVar1 == 0) {
    _swift_bridgeObjectRelease();
    FUN_1004f97f4();
    _swift_allocError(&DAT_1009ce218,local_98,0,0);
    *local_98 = 0;
    _swift_willThrow();
    return;
  }
  local_f8 = &PTR_PTR_1009d1610;
  local_100 = &DAT_1009d1638;
  local_118[0] = PTR___swiftEmptyDictionarySingleton_100995ea8;
  pTVar8 = &TargetProtocolDescriptor_100900904;
  lVar2 = lVar1;
  _swift_conformsToProtocol();
  if (lVar2 == 0) {
    puVar3 = local_98;
    FUN_1004f589c();
    local_128 = puVar3;
    local_120 = pTVar8;
    FUN_1000b142c(local_118,auStack_150);
    puVar4 = auStack_f0;
    local_d8 = lVar1;
    uStack_d0 = uVar7;
    FUN_1000efc08(puVar4);
    FUN_100008184(puVar3,pTVar8);
    FUN_1005386f8(puVar4,&local_128,auStack_150,uStack_90,local_88,lVar1,
                  PTR___s10Foundation4DataVN_1009961e8,uVar7,&PTR_PTR_1009d16b0);
    _swift_bridgeObjectRelease(local_98);
    FUN_100006cdc(puVar3,pTVar8);
    if (unaff_x21 == 0) goto LAB_1004f71ac;
    FUN_1004f9834(auStack_f0);
  }
  else {
    local_128 = (undefined1 *)0x0;
    local_120 = (TargetProtocolDescriptor *)0xe000000000000000;
    FUN_1004f5a80(local_98 + 0x20,local_98 + 0x20 + *(long *)(local_98 + 0x10),uStack_90,local_88,
                  local_118,&local_128);
    pTVar8 = local_120;
    puVar4 = local_128;
    if (unaff_x21 == 0) {
      FUN_1000b142c(local_118,auStack_150);
      puVar3 = auStack_f0;
      local_d8 = lVar1;
      uStack_d0 = uVar7;
      FUN_1000efc08(puVar3);
      _swift_bridgeObjectRetain(pTVar8);
      FUN_100538860(puVar3,puVar4,pTVar8,auStack_150,uStack_90,local_88,lVar1,uVar7);
      _swift_bridgeObjectRelease(pTVar8);
      _swift_bridgeObjectRelease(local_98);
LAB_1004f71ac:
      FUN_10003f094(auStack_f0);
      FUN_10003f094(local_118);
      return;
    }
    _swift_bridgeObjectRelease(local_98);
    _swift_bridgeObjectRelease(local_120);
  }
  ppuVar5 = local_118;
  FUN_10003f094();
  FUN_1004f97f4();
  _swift_allocError(&DAT_1009ce218,ppuVar5,0,0);
  *(undefined1 *)ppuVar5 = 0;
  _swift_willThrow();
  _swift_errorRelease(unaff_x21);
  return;
}

