// rea decompile_all
// name: FUN_100650918
// address: 0x100650918
// body: available
// range: 0x100650918-0x100650d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_100650918(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *local_80;
  undefined *puStack_78;
  byte local_70;
  undefined *local_68;
  
  if (((ulong)param_7 & 0xff) == 0) {
    if (param_5 == (undefined *)0x0 && param_6 == (undefined *)0x0) goto LAB_1006509ec;
  }
  else if ((((uint)param_7 & 0xff) != 1) && (*(long *)(param_8 + 0x10) == 0)) {
LAB_1006509ec:
    _swift_bridgeObjectRetain(param_4);
    return param_1;
  }
  if (((ulong)param_3 & 0xff) == 0) {
    if (param_1 != (undefined *)0x0 || param_2 != (undefined *)0x0) goto LAB_100650988;
  }
  else if ((((uint)param_3 & 0xff) == 1) || (*(long *)(param_4 + 0x10) != 0)) {
LAB_100650988:
    puVar5 = param_5;
    FUN_10065f87c(param_5,param_6,param_7,param_8);
    puVar8 = param_1;
    FUN_10065f87c(param_1,param_2,param_3,param_4);
    puVar1 = puVar8;
    if ((long)puVar5 <= (long)puVar8) {
      puVar1 = puVar5;
    }
    if ((long)puVar5 < 0) {
      if (SBORROW8(0,(long)puVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100650d44);
        (*pcVar4)();
      }
      FUN_10064fbe0();
    }
    else {
      puVar10 = param_5;
      puVar9 = param_6;
      param_8 = param_7;
      FUN_10065933c();
      param_5 = puVar5;
      param_6 = puVar10;
      param_7 = puVar9;
    }
    local_70 = (byte)param_7;
    local_80 = param_5;
    puStack_78 = param_6;
    local_68 = param_8;
    if ((long)puVar8 < 0) {
      if (SBORROW8(0,(long)puVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100650d48);
        (*pcVar4)();
      }
      _swift_bridgeObjectRetain(param_8);
      FUN_10064fbe0();
    }
    else {
      _swift_bridgeObjectRetain(param_8);
      puVar5 = param_1;
      puVar10 = param_2;
      param_4 = param_3;
      FUN_10065933c();
      param_1 = puVar8;
      param_2 = puVar5;
      param_3 = puVar10;
    }
    puVar8 = param_5;
    FUN_10064b1b4(param_5,param_6,param_7,param_8,param_1,param_2,param_3,param_4);
    _swift_bridgeObjectRelease(param_8);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar10 = param_4;
    puVar9 = param_1;
    puVar14 = param_2;
    if (puVar8 == (undefined *)0xffffffffffffffff) {
      local_70 = (byte)param_3;
      puVar10 = param_8;
      puVar9 = param_5;
      param_3 = param_7;
      puVar14 = param_6;
      local_80 = param_1;
      puStack_78 = param_2;
      local_68 = param_4;
    }
    do {
      puVar3 = local_68;
      bVar2 = local_70;
      puVar7 = puStack_78;
      puVar8 = local_80;
      if (local_70 == 0) {
        if (local_80 == (undefined *)0x0 && puStack_78 == (undefined *)0x0) goto LAB_100650cd0;
      }
      else if ((local_70 != 1) && (*(long *)(local_68 + 0x10) == 0)) {
LAB_100650cd0:
        _swift_bridgeObjectRelease(local_68);
        FUN_10064fbe0(puVar9,puVar14,param_3,puVar10,puVar1);
        _swift_bridgeObjectRelease(puVar10);
        return puVar9;
      }
      puVar6 = local_80;
      FUN_10065f87c(local_80,puStack_78,local_70,local_68);
      if ((long)puVar6 < 0) {
        if (SBORROW8(0,(long)puVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100650d40);
          (*pcVar4)();
        }
        FUN_1006508b0(&local_80,-(long)puVar6);
      }
      else {
        FUN_10065f798(puVar8,puVar7,bVar2,puVar3);
        if ((long)puVar6 < (long)puVar8) {
          FUN_1006599cc(puVar6);
        }
        else if (bVar2 < 2) {
          _swift_bridgeObjectRelease(puVar3);
          local_80 = (undefined *)0x0;
          puStack_78 = (undefined *)0x0;
          local_70 = 0;
          local_68 = puVar5;
        }
        else {
          puVar8 = puVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar8 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_100629f38(0,*(ulong *)(puVar3 + 0x18) >> 1);
            _swift_bridgeObjectRelease(puVar3);
          }
          else {
            uVar15 = *(undefined8 *)(puVar3 + 0x10);
            puVar7 = puVar3;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar3;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_10062958c(0,uVar15,1,puVar3);
              local_68 = puVar8;
            }
            FUN_1003d2e64(&local_80,0,uVar15,0);
          }
          local_68 = puVar8;
          FUN_100628ce8(0,0,0,puVar5);
        }
      }
      puVar3 = local_68;
      puVar7 = puStack_78;
      puVar8 = local_80;
      puVar16 = (undefined *)(ulong)local_70;
      puVar6 = local_80;
      FUN_10064b1b4(local_80,puStack_78,puVar16,local_68,puVar9,puVar14,param_3,puVar10);
      puVar11 = puVar10;
      puVar12 = puVar9;
      puVar13 = puVar14;
      if (puVar6 == (undefined *)0xffffffffffffffff) {
        local_70 = (byte)param_3;
        puVar11 = puVar3;
        puVar12 = puVar8;
        param_3 = puVar16;
        puVar13 = puVar7;
        local_80 = puVar9;
        puStack_78 = puVar14;
        local_68 = puVar10;
      }
      puVar8 = puVar12;
      FUN_10065eb84(puVar12,puVar13,param_3,puVar11,0);
      puVar10 = puVar11;
      puVar9 = puVar12;
      puVar14 = puVar13;
      if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100650d3c);
        (*pcVar4)();
      }
    } while( true );
  }
  _swift_bridgeObjectRetain(param_8);
  return param_5;
}

