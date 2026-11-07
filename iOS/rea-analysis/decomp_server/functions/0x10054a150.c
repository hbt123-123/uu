// rea decompile_all
// name: FUN_10054a150
// address: 0x10054a150
// body: available
// range: 0x10054a150-0x10054a43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054a150(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_b8 [40];
  long local_90 [3];
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar12 = *(ulong *)(param_1 + 0x20);
  FUN_10003f030(param_1,lVar3);
  (**(code **)(uVar12 + 8))();
  lVar11 = *unaff_x20;
  if ((*(long *)(lVar11 + 0x10) == 0) || (lVar4 = lVar3, FUN_1003618e4(), (uVar12 & 1) == 0)) {
    puVar8 = &DAT_100aaa300;
    FUN_100004bb4(&DAT_100aaa300,&DAT_100838250);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    FUN_1000b142c(param_1,puVar8 + 0x20);
    lVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar11);
    local_90[0] = *unaff_x20;
    FUN_1005216ac(puVar8,lVar3,lVar11);
    *unaff_x20 = local_90[0];
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + lVar4 * 8);
    lVar11 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_10003f030(param_1,lVar11);
    pcVar9 = *(code **)(lVar4 + 0x18);
    _swift_bridgeObjectRetain(lVar13);
    (*pcVar9)(lVar11,lVar4);
    uVar12 = *(ulong *)(lVar13 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar12 != 0) {
      uVar10 = 0;
      lVar4 = lVar13 + 0x20;
      do {
        if (*(ulong *)(lVar13 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10054a3fc);
          (*pcVar9)();
        }
        FUN_1000b142c(lVar4,local_90);
        lVar2 = lStack_70;
        lVar5 = local_78;
        FUN_10003f030(local_90,local_78);
        (**(code **)(lVar2 + 0x18))(lVar5,lVar2);
        if (lVar5 == lVar11) {
          FUN_10003f094(local_90);
        }
        else {
          FUN_1000a0074(local_90,auStack_b8);
          puVar6 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          local_68 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_10051169c(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_68 + 0x10);
          if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
            FUN_10051169c(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
          }
          puVar8 = local_68;
          *(ulong *)(local_68 + 0x10) = uVar1 + 1;
          FUN_1000a0074(auStack_b8,local_68 + uVar1 * 0x28 + 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar12 != uVar10);
    }
    _swift_bridgeObjectRelease(lVar13);
    FUN_1000b142c(param_1,local_90);
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_1005078e8(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar12 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_1005078e8(puVar8,uVar12 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar12 + 1;
    FUN_1000a0074(local_90,puVar8 + uVar12 * 0x28 + 0x20);
    lVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar11);
    local_90[0] = *unaff_x20;
    FUN_1005216ac(puVar8,lVar3,lVar11);
    *unaff_x20 = local_90[0];
  }
  return;
}

