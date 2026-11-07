// rea decompile_all
// name: FUN_10063427c
// address: 0x10063427c
// body: available
// range: 0x10063427c-0x10063453f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063427c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long local_68;
  
  lVar5 = unaff_x20[2];
  uVar14 = unaff_x20[3];
  if (SBORROW8(uVar14 >> 1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063453c);
    (*pcVar3)();
  }
  uVar12 = *(ulong *)(param_1 + 0x10);
  if (uVar12 != param_2) {
    if (uVar12 <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100634540);
      (*pcVar3)();
    }
    uVar16 = param_2 + 1;
    uVar11 = *(undefined1 *)(param_1 + 0x20 + param_2);
    lVar9 = (uVar14 >> 1) - lVar5;
    do {
      lVar7 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634520);
        (*pcVar3)();
      }
      lVar4 = lVar9;
      FUN_100633e48(lVar9,lVar7,*unaff_x20,unaff_x20[1],lVar5,uVar14,FUN_100630840);
      lVar5 = lVar4;
      local_68 = lVar4;
      FUN_100634008();
      FUN_100633b90(&local_68,lVar9,0,lVar5,lVar7,thunk_FUN_10055736c);
      _swift_release(lVar7);
      _swift_release(lVar4);
      lVar5 = unaff_x20[2];
      uVar14 = unaff_x20[3];
      uVar8 = uVar14 >> 1;
      lVar7 = uVar8 - lVar5;
      if (SBORROW8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634524);
        (*pcVar3)();
      }
      puVar2 = (undefined *)*unaff_x20;
      lVar4 = unaff_x20[1];
      lVar15 = lVar7;
      if ((uVar14 & 1) != 0) {
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar6 = puVar2;
        _swift_unknownObjectRetain();
        _swift_dynamicCastClass();
        if (puVar6 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar2);
          puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        lVar10 = *(long *)(puVar6 + 0x10);
        if ((undefined *)(lVar4 + lVar5 + lVar7) == puVar6 + lVar10 + 0x20) {
          uVar13 = *(ulong *)(puVar6 + 0x18);
          _swift_release();
          lVar10 = (uVar13 >> 1) - lVar10;
          lVar15 = lVar7 + lVar10;
          if (SCARRY8(lVar7,lVar10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100634538);
            (*pcVar3)();
          }
        }
        else {
          _swift_release();
        }
      }
      lVar10 = 0;
      lVar1 = lVar15;
      if (lVar15 <= lVar9) {
        lVar1 = lVar9;
      }
      while (uVar13 = uVar16 + lVar10, (lVar9 - lVar1) + lVar10 != 0) {
        *(undefined1 *)(lVar4 + lVar9 + lVar5 + lVar10) = uVar11;
        if ((uVar16 - uVar12) + lVar10 == 0) {
          uVar11 = 0;
          lVar1 = lVar9 + lVar10 + 1;
          lVar4 = lVar1 - lVar7;
          uVar16 = uVar12;
          goto joined_r0x000100634490;
        }
        if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634518);
          (*pcVar3)();
        }
        uVar11 = *(undefined1 *)(param_1 + 0x20 + uVar16 + lVar10);
        lVar10 = lVar10 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10063451c);
          (*pcVar3)();
        }
      }
      lVar4 = lVar1 - lVar7;
      uVar16 = uVar13;
joined_r0x000100634490:
      if (SBORROW8(lVar1,lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634528);
        (*pcVar3)();
      }
      if (lVar4 != 0) {
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar6 = puVar2;
        _swift_unknownObjectRetain();
        _swift_dynamicCastClass();
        if (puVar6 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar2);
          puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        if (SCARRY8(*(long *)(puVar6 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10063452c);
          (*pcVar3)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + lVar4;
        _swift_release();
        if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634530);
          (*pcVar3)();
        }
        if ((long)(uVar8 + lVar4) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634534);
          (*pcVar3)();
        }
        uVar14 = uVar14 & 1 | (uVar8 + lVar4) * 2;
        unaff_x20[3] = uVar14;
      }
      lVar10 = lVar9 + lVar10;
      lVar9 = lVar1;
    } while (lVar15 <= lVar10);
  }
  return;
}

