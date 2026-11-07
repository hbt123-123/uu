// rea decompile_all
// name: FUN_1000f62a0
// address: 0x1000f62a0
// body: available
// range: 0x1000f62a0-0x1000f658f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f62a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [32];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long lStack_70;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_e0 = param_2;
  FUN_1000cc648();
  lVar12 = *(long *)(param_3 + 0x10);
  if (lVar12 != 0) {
    param_3 = param_3 + 0x20;
    do {
      FUN_1000f794c(param_3,&local_90);
      FUN_10003e8bc(auStack_80,auStack_d0);
      uVar5 = uStack_88;
      uVar4 = local_90;
      _swift_bridgeObjectRetain(uStack_88);
      FUN_1000f7988(&local_90);
      puVar8 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar9 = uVar4;
      uVar10 = uVar5;
      local_d8 = puVar7;
      FUN_1001a2c70();
      uVar11 = (ulong)~(uint)uVar10 & 1;
      lVar1 = *(long *)(puVar7 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000f6564);
        (*pcVar6)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar1) {
        FUN_1000675f0(lVar1,puVar8);
        uVar9 = uVar4;
        uVar11 = uVar5;
        FUN_1001a2c70();
        if (((uint)uVar10 & 1) != ((uint)uVar11 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000f6590);
          (*pcVar6)();
        }
LAB_1000f63d8:
        if ((uVar10 & 1) != 0) goto LAB_1000f62f4;
LAB_1000f63e0:
        puVar7 = local_d8;
        *(ulong *)(local_d8 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(local_d8 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(local_d8 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        FUN_10007f3d4(auStack_d0,*(long *)(local_d8 + 0x38) + uVar9 * 0x20);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000f6568);
          (*pcVar6)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        if (((ulong)puVar8 & 1) != 0) goto LAB_1000f63d8;
        FUN_100063670();
        if ((uVar10 & 1) == 0) goto LAB_1000f63e0;
LAB_1000f62f4:
        puVar7 = local_d8;
        FUN_10007f3d4(*(long *)(local_d8 + 0x38) + uVar9 * 0x20,&local_b0);
        FUN_10007f3d4(auStack_d0,*(long *)(puVar7 + 0x38) + uVar9 * 0x20);
        _swift_bridgeObjectRelease(uVar5);
      }
      FUN_1000c776c(&local_b0);
      param_3 = param_3 + 0x30;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1000b142c(DAT_100b360a8 + 200,&local_90);
  FUN_10003f030(&local_90,local_78);
  puVar8 = puVar7;
  FUN_100183774(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  uVar3 = local_e0;
  (**(code **)(lStack_70 + 0x78))(param_1,local_e0,puVar8,local_78,lStack_70);
  _swift_bridgeObjectRelease(puVar8);
  FUN_10003f094(&local_90);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uStack_e8 = uVar3;
  local_f0 = param_1;
  FUN_1003fb48c(FUN_1000f79bc,auStack_100,0xd000000000000097,0x80000001008896d0,0xd00000000000001e,
                0x8000000100889770,0x25,0);
  return;
}

