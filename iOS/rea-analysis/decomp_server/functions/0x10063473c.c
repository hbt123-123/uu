// rea decompile_all
// name: FUN_10063473c
// address: 0x10063473c
// body: available
// range: 0x10063473c-0x100634a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063473c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x20;
  undefined1 uVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long local_70;
  long local_68;
  
  local_70 = unaff_x20[2];
  uVar8 = unaff_x20[3];
  lVar16 = (uVar8 >> 1) - local_70;
  if (SBORROW8(uVar8 >> 1,local_70)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a3c);
    (*pcVar3)();
  }
  uVar17 = *(ulong *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x18) >> 1;
  if (uVar17 != uVar9) {
    lVar10 = *(long *)(param_1 + 0x10);
    if ((long)uVar17 < lVar10 || (long)uVar9 <= (long)uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a40);
      (*pcVar3)();
    }
    lVar11 = *(long *)(param_1 + 8);
    uVar19 = uVar17 + 1;
    uVar13 = *(undefined1 *)(lVar11 + uVar17);
    do {
      lVar7 = lVar16 + 1;
      if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a24);
        (*pcVar3)();
      }
      lVar4 = lVar16;
      FUN_100633e48(lVar16,lVar7,*unaff_x20,unaff_x20[1],local_70,uVar8,param_2);
      lVar5 = lVar4;
      local_68 = lVar4;
      (*param_3)();
      FUN_100633b90(&local_68,lVar16,0,lVar5,lVar7,param_4);
      _swift_release(lVar7);
      _swift_release(lVar4);
      local_70 = unaff_x20[2];
      uVar8 = unaff_x20[3];
      uVar17 = uVar8 >> 1;
      lVar7 = uVar17 - local_70;
      if (SBORROW8(uVar17,local_70)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a28);
        (*pcVar3)();
      }
      puVar2 = (undefined *)*unaff_x20;
      lVar5 = unaff_x20[1];
      lVar4 = lVar7;
      if ((uVar8 & 1) != 0) {
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar6 = puVar2;
        _swift_unknownObjectRetain();
        _swift_dynamicCastClass();
        if (puVar6 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar2);
          puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        lVar18 = *(long *)(puVar6 + 0x10);
        if ((undefined *)(lVar5 + local_70 + lVar7) == puVar6 + lVar18 + 0x20) {
          uVar15 = *(ulong *)(puVar6 + 0x18);
          _swift_release();
          lVar18 = (uVar15 >> 1) - lVar18;
          lVar4 = lVar7 + lVar18;
          if (SCARRY8(lVar7,lVar18)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a38);
            (*pcVar3)();
          }
        }
        else {
          _swift_release();
        }
      }
      if (lVar16 < lVar4) {
        *(undefined1 *)(lVar5 + local_70 + lVar16) = uVar13;
        lVar18 = lVar16 + 1;
        if (uVar19 == uVar9) {
          uVar13 = 0;
          bVar14 = true;
          lVar16 = lVar18;
          uVar19 = uVar9;
        }
        else {
          lVar1 = 0;
          do {
            lVar12 = lVar1;
            if (((long)uVar19 < lVar10) || ((long)uVar9 <= (long)(uVar19 + lVar12))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a20);
              (*pcVar3)();
            }
            uVar13 = *(undefined1 *)(lVar11 + uVar19 + lVar12);
            if ((lVar18 - lVar4) + lVar12 == 0) {
              uVar19 = uVar19 + lVar12 + 1;
              lVar16 = lVar4;
              goto LAB_1006349a8;
            }
            *(undefined1 *)(lVar5 + lVar16 + local_70 + 1 + lVar12) = uVar13;
            lVar1 = lVar12 + 1;
          } while ((uVar19 - uVar9) + lVar1 != 0);
          uVar13 = 0;
          lVar16 = lVar18 + lVar1;
          uVar19 = uVar9;
LAB_1006349a8:
          bVar14 = lVar18 + lVar12 < lVar4;
        }
      }
      else {
        bVar14 = false;
      }
      lVar4 = lVar16 - lVar7;
      if (SBORROW8(lVar16,lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a2c);
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a30);
          (*pcVar3)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + lVar4;
        _swift_release();
        if (SCARRY8(uVar17,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a34);
          (*pcVar3)();
        }
        if ((long)(uVar17 + lVar4) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634a1c);
          (*pcVar3)();
        }
        uVar8 = uVar8 & 1 | (uVar17 + lVar4) * 2;
        unaff_x20[3] = uVar8;
      }
    } while (!bVar14);
  }
  return;
}

