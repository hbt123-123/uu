// rea decompile_all
// name: FUN_1000f3974
// address: 0x1000f3974
// body: available
// range: 0x1000f3974-0x1000f3c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f3974(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_a0 [16];
  ulong auStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 2;
  lVar8 = 0;
  FUN_1003b0860((long)&local_80 + lVar1,2,0,9);
  __s10Foundation3URLV14absoluteStringSSvg();
  (**(code **)(lVar10 + 8))((long)&local_80 + lVar1,lVar2);
  lVar2 = *(long *)(unaff_x20 + 0x118);
  if ((lVar2 == 0) ||
     ((uVar3 != *(ulong *)(unaff_x20 + 0x110) || lVar2 != lVar8 &&
      (uVar4 = uVar3,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,lVar8,*(ulong *)(unaff_x20 + 0x110),lVar2,0), (uVar4 & 1) == 0)))) {
    *(ulong *)(unaff_x20 + 0x110) = uVar3;
    *(long *)(unaff_x20 + 0x118) = lVar8;
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRelease(lVar2);
    __s6Darwin7SIG_IGNyys5Int32VXCvg();
    _signal(0xd,lVar2);
    plVar5 = (long *)0x0;
    FUN_10025672c();
    _swift_allocObject();
    FUN_10025667c();
    (**(code **)(*plVar5 + 0xd0))(FUN_1000f3c98,0);
    pcVar9 = *(code **)(*plVar5 + 0xa0);
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)(uVar3,lVar8);
    FUN_1003b0978(2,0,9);
    (**(code **)(*plVar5 + 0xb8))();
    puVar6 = &DAT_100a78700;
    FUN_100004bb4(&DAT_100a78700,&DAT_10080d560);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    FUN_10040987c(&local_80);
    *(undefined **)(puVar6 + 0x38) = &DAT_1009bc708;
    *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_1009bc678;
    puVar7 = &DAT_10099c530;
    _swift_allocObject(&DAT_10099c530,0x40,7);
    *(undefined **)(puVar6 + 0x20) = puVar7;
    *(undefined8 *)(puVar7 + 0x18) = uStack_78;
    *(undefined8 *)(puVar7 + 0x10) = local_80;
    *(undefined8 *)(puVar7 + 0x28) = uStack_68;
    *(undefined8 *)(puVar7 + 0x20) = uStack_70;
    *(undefined8 *)(puVar7 + 0x38) = uStack_58;
    *(undefined8 *)(puVar7 + 0x30) = local_60;
    (**(code **)(*plVar5 + 0x148))(puVar6);
    FUN_10025735c(0);
    FUN_100256ae0(plVar5);
    FUN_100256fa0(1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)auStack_90 + lVar1) = uVar3;
    *(long *)((long)auStack_90 + lVar1 + 8) = lVar8;
    FUN_1003fb48c(FUN_1000f43f4,auStack_a0 + lVar1,0xd000000000000084,0x8000000100888f20,
                  &DAT_d000000000000010,0x8000000100888fb0,0x162,0);
    _swift_bridgeObjectRelease(lVar8);
    _swift_release(plVar5);
  }
  else {
    _swift_bridgeObjectRelease(lVar8);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000f3c6c,0,0xd000000000000084,0x8000000100888f20,&DAT_d000000000000010,
                  0x8000000100888fb0,0x14f,0);
  }
  return;
}

