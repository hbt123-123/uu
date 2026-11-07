// rea decompile_all
// name: FUN_100190718
// address: 0x100190718
// body: available
// range: 0x100190718-0x1001909bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100190718(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_a0 [16];
  ulong auStack_90 [2];
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = &DAT_100a7c220;
  FUN_100004bb4(&DAT_100a7c220,&DAT_100810220);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  lVar11 = (long)&local_80 + lVar7;
  uVar9 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar9 != 0) {
    uVar10 = *(ulong *)(unaff_x20 + 0x30);
    uVar1 = uVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar1 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_80 = uVar10;
      uStack_78 = uVar9;
      local_70 = uVar2;
      uStack_68 = uVar3;
      FUN_10009ff0c();
      _swift_bridgeObjectRetain(uVar9);
      puVar5 = &local_80;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (puVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar4,puVar4);
      if ((((((ulong)puVar5 & 1) != 0) && ((*(byte *)((long)param_1 + 0x14) & 1) == 0)) &&
          ((*(uint *)(param_1 + 2) >> 8 & 1) != 0)) && ((*(uint *)(param_1 + 2) >> 0x10 & 1) != 0))
      {
        local_80 = 0x2f;
        uStack_78 = 0xe100000000000000;
        local_70 = uVar2;
        uStack_68 = uVar3;
        if (DAT_100a73bb0 != -1) {
          _swift_once(&DAT_100a73bb0,FUN_10019b250);
        }
        __sSS6appendyySSF(DAT_100b36258,DAT_100b36260);
        __sSS6appendyySSF(0x616f6270696c432f,0xea00000000006472);
        uVar1 = uStack_78;
        lVar6 = 0;
        __s10Foundation6LocaleVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
        *(undefined **)((long)auStack_90 + lVar7) = puVar4;
        *(undefined **)((long)auStack_90 + lVar7 + 8) = puVar4;
        uVar8 = 0;
        __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
                  (&local_80,0,0,0,1,lVar11,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
        FUN_100040bb4(lVar11,&DAT_100a7c220,&DAT_100810220);
        _swift_bridgeObjectRelease(uVar1);
        if ((uVar8 & 1) != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)((long)auStack_90 + lVar7) = uVar10;
          *(ulong *)((long)auStack_90 + lVar7 + 8) = uVar9;
          FUN_1003fb45c(FUN_1001912c4,auStack_a0 + lVar7,0xd0000000000000ad,0x8000000100890a70,
                        0xd000000000000016,0x8000000100898900,0x173,7);
          lVar7 = unaff_x20 + 0x40;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar7 != 0) {
            FUN_100143e98(uVar10,uVar9,uVar2,uVar3);
            _swift_bridgeObjectRelease(uVar9);
            _swift_unknownObjectRelease(lVar7);
            return;
          }
        }
      }
      _swift_bridgeObjectRelease(uVar9);
    }
  }
  return;
}

