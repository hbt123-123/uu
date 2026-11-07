// rea decompile_all
// name: FUN_100127684
// address: 0x100127684
// body: available
// range: 0x100127684-0x1001279bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100127684(ulong param_1,ulong param_2)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  int iVar11;
  long unaff_x20;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_80 [16];
  int aiStack_70 [4];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar2 = &DAT_100a79890;
  uVar9 = 0;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  puVar13 = auStack_60 + lVar7;
  lVar3 = 0;
  FUN_100127240();
  lVar12 = *(long *)(unaff_x20 + *(int *)(lVar3 + 0x28));
  iVar11 = (int)param_1;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar4 = *(ulong *)(lVar12 + 0x28);
    uVar9 = param_1 & 0xffffffff;
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar4,uVar9,4);
    uVar10 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar12 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1) != 0) {
      do {
        if (*(int *)(*(long *)(lVar12 + 0x30) + uVar4 * 4) == iVar11) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(int *)((long)aiStack_70 + lVar7) = iVar11;
          pcVar8 = FUN_100128e4c;
          uVar6 = 0x2b;
          goto LAB_100127990;
        }
        uVar4 = uVar4 + 1 & ~uVar10;
      } while ((*(ulong *)(lVar12 + 0x38 + (uVar4 >> 3 & 0xffffffffffffff8)) >> (uVar4 & 0x3f) & 1)
               != 0);
    }
  }
  lVar15 = (long)*(int *)(lVar3 + 0x20);
  lVar12 = *(long *)(unaff_x20 + lVar15);
  if ((*(long *)(lVar12 + 0x10) == 0) || (uVar4 = param_1, thunk_FUN_1001a2c34(), (uVar9 & 1) == 0))
  {
    FUN_100127b1c();
    if ((param_2 & 1) == 0) {
      FUN_10007f314();
      lVar12 = 0;
      __s10Foundation4UUIDVMa();
      puVar5 = puVar13;
      (**(code **)(*(long *)(lVar12 + -8) + 0x30))(puVar13,1,lVar12);
      FUN_100040bb4(puVar13,&DAT_100a79890,&DAT_10080e600);
      if (((int)puVar5 != 1) &&
         (piVar1 = (int *)(unaff_x20 + *(int *)(lVar3 + 0x1c)), (char)piVar1[1] == '\x01')) {
        *piVar1 = iVar11;
        *(undefined1 *)(piVar1 + 1) = 0;
        uVar14 = *(undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
        _swift_bridgeObjectRetain(uVar14);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar15);
        _swift_isUniquelyReferenced_nonNull_native(uVar6);
        local_58 = *(undefined8 *)(unaff_x20 + lVar15);
        FUN_10006208c(uVar14,param_1,uVar6);
        *(undefined8 *)(unaff_x20 + lVar15) = local_58;
        iVar11 = *(int *)(lVar3 + 0x24);
        FUN_100040bb4(unaff_x20 + iVar11,&DAT_100a76718,&DAT_10080ccc0);
        lVar7 = 0;
        __s10Foundation4DateVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(unaff_x20 + iVar11,1,1,lVar7);
        _swift_bridgeObjectRetain(uVar14);
        return;
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)aiStack_70 + lVar7) = iVar11;
    pcVar8 = FUN_100128e54;
    uVar6 = 0x30;
LAB_100127990:
    FUN_1003fb4bc(pcVar8,auStack_80 + lVar7,0xd0000000000000a9,0x800000010088e440,0xd000000000000011
                  ,0x800000010088e660,uVar6,0);
  }
  else {
    _swift_bridgeObjectRetain(*(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar4 * 8));
  }
  return;
}

