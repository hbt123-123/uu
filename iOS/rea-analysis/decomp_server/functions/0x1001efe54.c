// rea decompile_all
// name: FUN_1001efe54
// address: 0x1001efe54
// body: available
// range: 0x1001efe54-0x1001f0077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001efe54(void)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  byte abStack_98 [8];
  long alStack_90 [2];
  undefined1 auStack_80 [16];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + lVar1;
  __s10Foundation4DateVACycfC(puVar5);
  FUN_100401b14(0);
  puVar4 = auStack_80;
  FUN_1003fb48c(FUN_1001fa68c,puVar4,0xd000000000000095,0x80000001008a00c0,&DAT_d000000000000033,
                0x80000001008a14d0,799,0);
  if ((*(int *)(unaff_x20 + 0x18) < 0) ||
     (pcVar3 = _ptsname(*(int *)(unaff_x20 + 0x18)), pcVar3 == (char *)0x0)) {
    FUN_1003fb4bc(FUN_1001fa698);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)alStack_90 + lVar1) = unaff_x20;
    *(undefined1 **)((long)alStack_90 + lVar1 + 8) = puVar5;
    FUN_1003fb48c(FUN_1001fa6a0,(long)&lStack_a0 + lVar1,extraout_x12 + 0x62,0x80000001008a00c0,
                  &DAT_d000000000000033,0x80000001008a14d0,0x322,0);
    uVar6 = 0;
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    uVar6 = (uint)pcVar3;
    FUN_1001f0704();
    _swift_bridgeObjectRelease(puVar4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)&lStack_a0 + lVar1) = unaff_x20;
    abStack_98[lVar1] = (byte)uVar6 & 1;
    *(undefined1 **)((long)alStack_90 + lVar1) = puVar5;
    FUN_1003fb48c(FUN_1001fa6a8,auStack_b0 + lVar1,0xd000000000000095,0x80000001008a00c0,
                  &DAT_d000000000000033,0x80000001008a14d0,0x326,0);
  }
  (**(code **)(lVar7 + 8))(puVar5,lVar2);
  return uVar6 & 1;
}

