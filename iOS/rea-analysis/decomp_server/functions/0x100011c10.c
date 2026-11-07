// rea decompile_all
// name: FUN_100011c10
// address: 0x100011c10
// body: available
// range: 0x100011c10-0x100011e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011c10(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_110 [16];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0xb8,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + 0xb8);
  lVar4 = lVar7;
  _swift_bridgeObjectRetain();
  FUN_100045cb8();
  _swift_bridgeObjectRelease(lVar7);
  lVar7 = *(long *)(lVar4 + 0x10);
  if (lVar7 != 0) {
    puVar10 = (uint *)(lVar4 + 0x20);
    do {
      while( true ) {
        uVar2 = *puVar10;
        uVar11 = (ulong)uVar2;
        puVar5 = auStack_90;
        _swift_beginAccess(unaff_x20 + 0xb8,puVar5,0x21,0);
        thunk_FUN_1001a2c34();
        if (((ulong)puVar5 & 1) == 0) break;
        iVar3 = (int)*(undefined8 *)(unaff_x20 + 0xb8);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar8 = *(long *)(unaff_x20 + 0xb8);
        *(undefined8 *)(unaff_x20 + 0xb8) = 0x8000000000000000;
        if (iVar3 == 0) {
          FUN_100062938();
        }
        puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 0x18);
        uVar9 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        uVar12 = puVar6[2];
        FUN_10006be54(uVar11,lVar8);
        *(long *)(unaff_x20 + 0xb8) = lVar8;
        _swift_endAccess(auStack_90);
        _swift_retain(uVar12);
        __s8Dispatch0A8WorkItemC6cancelyyFTj();
        _swift_release(uVar12);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_100 = uVar9;
        local_f8 = uVar1;
        local_f0 = uVar12;
        local_e8 = uVar2;
        local_e0 = param_1;
        uStack_d8 = param_2;
        FUN_1003fb48c(thunk_FUN_10003fc58,auStack_110,0xd0000000000000a9,0x8000000100877660,
                      0xd000000000000032,0x8000000100878eb0,0x7eb,0);
        _swift_release(uVar12);
        lVar7 = lVar7 + -1;
        puVar10 = puVar10 + 1;
        if (lVar7 == 0) goto LAB_100011de0;
      }
      _swift_endAccess(auStack_90);
      lVar7 = lVar7 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
  }
LAB_100011de0:
  _swift_bridgeObjectRelease(lVar4);
  return;
}

