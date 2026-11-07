// rea decompile_all
// name: FUN_10062f234
// address: 0x10062f234
// body: available
// range: 0x10062f234-0x10062f52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10062f4a4 to 0x1007df3c4 _swift_initStaticObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10062f234(undefined *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  undefined *local_68;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3 | (param_3 & 1) << 2;
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      puVar8 = &DAT_100ab7e50;
      if (uVar1 == 1) {
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      }
      else {
        FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      }
      _swift_initStaticObject();
      param_2 = param_2 & 0xcfffffffffffffff;
      goto LAB_10062f470;
    }
    lVar12 = *(long *)(param_1 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar12 != 0) {
      param_1 = param_1 + 0x30;
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        lVar2 = *(long *)(param_1 + -0x10);
        uVar3 = *(undefined8 *)(param_1 + -8);
        uVar4 = *param_1;
        FUN_10062e3d0(lVar2,uVar3,uVar4);
        lVar6 = lVar2;
        FUN_10062f234(lVar2,uVar3,uVar4);
        sVar11 = *(size_t *)(lVar6 + 0x10);
        lVar13 = *(long *)(puVar8 + 0x10);
        if (SCARRY8(lVar13,sVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f524);
          (*pcVar5)();
        }
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar7 == 0) ||
           (uVar10 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar10 < (long)(lVar13 + sVar11))) {
          FUN_1006295a0();
          uVar10 = *(ulong *)(puVar7 + 0x18) >> 1;
          puVar8 = puVar7;
          if (*(long *)(lVar6 + 0x10) != 0) goto LAB_10062f3a4;
LAB_10062f2f0:
          _swift_bridgeObjectRelease(lVar6);
          puVar7 = puVar8;
          if (sVar11 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f528);
            (*pcVar5)();
          }
        }
        else {
          puVar7 = puVar8;
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_10062f2f0;
LAB_10062f3a4:
          if ((long)(uVar10 - *(long *)(puVar7 + 0x10)) < (long)sVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f52c);
            (*pcVar5)();
          }
          _memcpy(puVar7 + *(long *)(puVar7 + 0x10) + 0x20,(void *)(lVar6 + 0x20),sVar11);
          _swift_bridgeObjectRelease(lVar6);
          if (sVar11 != 0) {
            if (SCARRY8(*(long *)(puVar7 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f530);
              (*pcVar5)();
            }
            *(size_t *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + sVar11;
          }
        }
        FUN_10062e434(lVar2,uVar3,uVar4);
        param_1 = param_1 + 0x18;
        lVar12 = lVar12 + -1;
        puVar8 = puVar7;
      } while (lVar12 != 0);
    }
    puVar8 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStaticObject();
  }
  else {
    puVar8 = &DAT_100ab7e50;
    if (uVar1 == 3) {
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      local_68 = puVar8;
      _swift_initStaticObject();
      _swift_initStaticObject(puVar8,&DAT_100ab4828);
      FUN_100665cbc(param_1,param_2 & 0xcfffffffffffffff);
      FUN_100628ae0();
      puVar9 = puVar8;
      FUN_10062f530();
      FUN_100628ae0(puVar8);
      goto LAB_10062f4f4;
    }
    if (uVar1 != 4) {
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      _swift_initStaticObject();
      return puVar8;
    }
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStaticObject();
LAB_10062f470:
    FUN_100665cbc(param_1,param_2);
    puVar7 = param_1;
  }
  puVar9 = puVar7;
  FUN_10062f530();
  FUN_100628ae0(puVar7);
  local_68 = puVar8;
LAB_10062f4f4:
  FUN_100628ae0(puVar9);
  return local_68;
}

