// rea decompile_all
// name: FUN_1000f6590
// address: 0x1000f6590
// body: available
// range: 0x1000f6590-0x1000f68b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6590(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_e0 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [48];
  
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc648();
  lVar11 = *(long *)(param_3 + 0x10);
  if (lVar11 != 0) {
    param_3 = param_3 + 0x20;
    do {
      FUN_1000f794c(param_3,&local_a0);
      FUN_10003e8bc(auStack_90,auStack_e0);
      uVar4 = uStack_98;
      uVar3 = local_a0;
      _swift_bridgeObjectRetain(uStack_98);
      FUN_1000f7988(&local_a0);
      puVar7 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar3;
      uVar9 = uVar4;
      FUN_1001a2c70();
      uVar10 = (ulong)~(uint)uVar9 & 1;
      lVar1 = *(long *)(puVar6 + 0x10) + uVar10;
      if (SCARRY8(*(long *)(puVar6 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f68a0);
        (*pcVar5)();
      }
      if (*(long *)(puVar6 + 0x18) < lVar1) {
        FUN_1000675f0(lVar1,puVar7);
        uVar8 = uVar3;
        uVar10 = uVar4;
        FUN_1001a2c70();
        if (((uint)uVar9 & 1) != ((uint)uVar10 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f68b4);
          (*pcVar5)();
        }
joined_r0x0001000f6744:
        if ((uVar9 & 1) != 0) goto LAB_1000f65ec;
LAB_1000f66e4:
        *(ulong *)(puVar6 + (uVar8 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar6 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        FUN_10007f3d4(auStack_e0,*(long *)(puVar6 + 0x38) + uVar8 * 0x20);
        if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f68a4);
          (*pcVar5)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        if (((ulong)puVar7 & 1) == 0) {
          FUN_100063670();
          goto joined_r0x0001000f6744;
        }
        if ((uVar9 & 1) == 0) goto LAB_1000f66e4;
LAB_1000f65ec:
        FUN_10007f3d4(*(long *)(puVar6 + 0x38) + uVar8 * 0x20,&local_c0);
        FUN_10007f3d4(auStack_e0,*(long *)(puVar6 + 0x38) + uVar8 * 0x20);
        _swift_bridgeObjectRelease(uVar4);
      }
      FUN_1000c776c(&local_c0);
      param_3 = param_3 + 0x30;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (param_6 == 0) {
    FUN_10025735c(0);
    lVar11 = 0;
    FUN_10025b0f8();
    _swift_initStackObject();
    puVar12 = (undefined8 *)(lVar11 + 0x28);
    *puVar12 = 0;
    *(undefined8 *)(lVar11 + 0x10) = param_1;
    *(undefined8 *)(lVar11 + 0x18) = param_2;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    _swift_beginAccess(puVar12,&local_a0,1,0);
    *puVar12 = puVar6;
    *(undefined8 *)(lVar11 + 0x38) = 0x6b6f;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x40) = 0xe200000000000000;
    *(undefined8 *)(lVar11 + 0x48) = 0;
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    FUN_10025735c(0);
    lVar11 = 0;
    FUN_10025b0f8();
    _swift_initStackObject();
    puVar12 = (undefined8 *)(lVar11 + 0x28);
    *puVar12 = 0;
    *(undefined8 *)(lVar11 + 0x10) = param_1;
    *(undefined8 *)(lVar11 + 0x18) = param_2;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    _swift_beginAccess(puVar12,&local_a0,1,0);
    *puVar12 = puVar6;
    *(undefined8 *)(lVar11 + 0x30) = param_4;
    *(undefined8 *)(lVar11 + 0x38) = param_5;
    *(long *)(lVar11 + 0x40) = param_6;
    *(undefined8 *)(lVar11 + 0x48) = param_7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_6);
  }
  FUN_100256f34(lVar11);
  _swift_setDeallocating(lVar11);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x48));
  return;
}

