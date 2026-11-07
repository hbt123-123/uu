// rea decompile_all
// name: FUN_100190108
// address: 0x100190108
// body: available
// range: 0x100190108-0x1001904eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100190440) */

undefined8 FUN_100190108(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  code *pcVar10;
  long lVar11;
  ulong unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_c0 [16];
  undefined8 auStack_b0 [2];
  long local_a0;
  undefined *local_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_a0 + lVar1;
  puVar3 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  uVar8 = 0x30;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = puVar3;
  _NSHomeDirectory();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = 0;
  *(undefined **)(puVar3 + 0x20) = puVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  local_68 = puVar3;
  FUN_100191734();
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar14 = *(long *)(lVar5 + 0x10);
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(lVar5);
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    FUN_10006fae0(0,lVar14,0);
    lVar15 = lVar5 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar13 + 0x48);
    pcVar10 = *(code **)(lVar13 + 0x10);
    local_a0 = lVar5;
    do {
      lVar5 = lVar12;
      lVar9 = lVar15;
      (*pcVar10)(lVar12,lVar15,lVar2);
      __s10Foundation3URLV4pathSSvg();
      (**(code **)(lVar13 + 8))(lVar12,lVar2);
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_10006fae0(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(long *)(puVar3 + uVar6 * 0x10 + 0x20) = lVar5;
      *(long *)(puVar3 + uVar6 * 0x10 + 0x28) = lVar9;
      lVar15 = lVar15 + lVar11;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(local_a0);
    lVar14 = *(long *)(puVar3 + 0x10);
  }
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    FUN_10005f920(puVar3);
  }
  uVar6 = unaff_x20;
  FUN_100605474();
  FUN_100401b14(0);
  if ((uVar6 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined ***)((long)auStack_b0 + lVar1) = &local_68;
    FUN_1003fb45c(FUN_100191e30,auStack_c0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                  0xd000000000000017,0x8000000100898ad0,0x143,7);
    puVar4 = local_68;
    puVar3 = &DAT_1009a11f0;
    _swift_allocObject(&DAT_1009a11f0,0x18,7);
    _swift_weakInit(puVar3 + 0x10,unaff_x20);
    puVar7 = puVar3;
    _swift_retain(puVar3);
    FUN_10018c468();
    FUN_100605074(puVar4,unaff_x20,FUN_100191e38,puVar3,puVar7);
    _swift_release_n(puVar3,2);
  }
  else {
    FUN_1003fb45c(FUN_1001904ec,0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000017,
                  0x8000000100898ad0,0x13f,7);
  }
  _swift_bridgeObjectRelease(local_68);
  return 1;
}

