// rea decompile_all
// name: thunk_FUN_1006248c4
// address: 0x1006248c0
// body: available
// range: 0x1006248c0-0x1006248c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 thunk_FUN_1006248c4(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar16 = *(long *)(puVar2 + -8);
  lVar12 = *(long *)(lVar16 + 0x40);
  uVar7 = lVar12 + 0xfU & 0xfffffffffffffff0;
  puStack_b8 = auStack_c0 + -uVar7;
  lVar10 = (long)puStack_b8 - uVar7;
  lVar15 = lVar10 - uVar7;
  lVar11 = lVar15 - uVar7;
  FUN_10061ea10();
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  pcStack_a8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  lStack_a0 = lVar3;
  (*pcStack_a8)(lVar11,1,1);
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_78,0,0);
  uVar6 = DAT_100b3a770;
  puVar2 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  uVar4 = uVar6;
  FUN_10061047c();
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  FUN_100607210(lVar11,lVar15);
  FUN_100607210(lVar15,lVar10);
  uVar7 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar8 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_1009e0890;
  _swift_allocObject(&DAT_1009e0890,uVar13 + 0x10,uVar7 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  FUN_100607324(lVar15,puVar5 + uVar8);
  *(code **)(puVar5 + uVar13) = FUN_100008290;
  *(undefined8 *)((long)(puVar5 + uVar13) + 8) = 0;
  plVar9 = *(long **)(param_1 + 0x10);
  pcVar14 = *(code **)(*plVar9 + 0x58);
  lStack_b0 = param_1;
  _swift_retain_n(puVar2,2);
  (*pcVar14)(&uStack_88,uVar6);
  if ((bStack_7f & 1) == 0) {
    FUN_1006073e8(uStack_88,bStack_80,0);
    *(code **)(lVar11 + -0x10) = FUN_10060ca50;
    *(undefined **)(lVar11 + -8) = puVar5;
    (**(code **)(*plVar9 + 0x60))(thunk_FUN_100627770);
    _swift_release(puVar2);
    _swift_release(puVar5);
  }
  else {
    uStack_98 = uStack_88;
    bStack_90 = bStack_80 & 1;
    FUN_10060b61c(&uStack_98,puVar2,uVar6,lVar10);
    FUN_1006073e8(uStack_88,bStack_80,1);
    _swift_release(puVar2);
    _swift_release(puVar5);
  }
  FUN_1006070b4(lVar10);
  _swift_release(lStack_b0);
  FUN_1006070b4(lVar11);
  puVar1 = puStack_b8;
  (*pcStack_a8)(puStack_b8,1,1,lStack_a0);
  uVar6 = 0;
  FUN_1006117f4(0,puVar1,puVar2);
  _swift_release(puVar2);
  FUN_1006070b4(puVar1);
  return uVar6;
}

