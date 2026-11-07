// rea decompile_all
// name: FUN_1000b4e48
// address: 0x1000b4e48
// body: available
// range: 0x1000b4e48-0x1000b519b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_1000b4e48(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long unaff_x21;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1a8;
  ulong uStack_1a0;
  undefined1 auStack_198 [152];
  undefined1 auStack_100 [144];
  long local_70;
  
  puVar5 = &DAT_100104458;
  FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
  _swift_allocObject();
  _swift_weakInit(puVar5 + 0x20,0);
  *(long *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = param_2;
  _swift_weakAssign(puVar5 + 0x20,0);
  puVar15 = (ulong *)(puVar5 + 0x28);
  *puVar15 = (ulong)PTR___swiftEmptyArrayStorage_1000f0740;
  lVar6 = param_1;
  (**(code **)(param_2 + 0x10))(auStack_198,param_1,param_2);
  FUN_10006cdcc();
  FUN_10006e954(auStack_198);
  uVar13 = *(ulong *)(lVar6 + 0x10);
  if (uVar13 != 0) {
    uVar17 = 0;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b519c);
        (*pcVar4)();
      }
      plVar11 = (long *)(lVar6 + 0x20 + uVar17 * 0x10);
      lVar9 = *plVar11;
      uVar1 = plVar11[1];
      if (lVar9 == param_1) {
        _swift_bridgeObjectRelease(lVar6);
        plVar10 = (long *)0x0;
        FUN_100095de4();
        plVar11 = plVar10;
        FUN_1000b5524();
        _swift_allocError(plVar10,plVar11,0,0);
        *plVar11 = param_1;
        plVar11[1] = uVar1;
        _swift_willThrow();
LAB_1000b5108:
        _swift_release(puVar5);
        return puVar5;
      }
      (**(code **)(uVar1 + 0x10))(auStack_100,lVar9,uVar1);
      lVar3 = local_70;
      _swift_bridgeObjectRetain(local_70);
      FUN_10006e954(auStack_100);
      lVar7 = lVar9;
      uVar12 = uVar1;
      (**(code **)(uVar1 + 0x18))();
      lVar16 = *(long *)(lVar3 + 0x10);
      local_1a8 = lVar7;
      uStack_1a0 = uVar12;
      if (lVar16 != 0) {
        puVar18 = (undefined8 *)(lVar3 + 0x28);
        do {
          local_1c0 = puVar18[-1];
          uVar2 = *puVar18;
          uStack_1b8 = uVar2;
          _swift_bridgeObjectRetain(uVar2);
          puVar8 = &local_1c0;
          FUN_100022318(puVar8,&local_1a8);
          _swift_bridgeObjectRelease(uVar2);
          if ((unaff_x21 != 0) || (((ulong)puVar8 & 1) != 0)) {
            _swift_bridgeObjectRelease(uVar12);
            _swift_bridgeObjectRelease(lVar3);
            _swift_bridgeObjectRelease(lVar6);
            plVar10 = (long *)0x0;
            FUN_100095de4();
            plVar11 = plVar10;
            FUN_1000b5524();
            _swift_allocError(plVar10,plVar11,0,0);
            *plVar11 = lVar9;
            plVar11[1] = uVar1 | 0x8000000000000000;
            _swift_willThrow();
            goto LAB_1000b5108;
          }
          puVar18 = puVar18 + 2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(lVar3);
      FUN_1000b4e48(lVar9,uVar1);
      if (unaff_x21 != 0) {
        _swift_release(puVar5);
        break;
      }
      _swift_beginAccess(puVar15,&local_1c0,0x21,0);
      FUN_1000b45f8();
      uVar12 = *puVar15;
      uVar14 = uVar12 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar14 + 0x10);
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_10006f6e0(uVar12,uVar1 + 1,1);
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
      *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar9;
      *(ulong *)(puVar5 + 0x28) = uVar12;
      _swift_endAccess(&local_1c0);
      _swift_weakAssign(lVar9 + 0x20,puVar5);
    } while (uVar17 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar6);
  return puVar5;
}

