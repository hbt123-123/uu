// rea decompile_all
// name: FUN_10062eaac
// address: 0x10062eaac
// body: available
// range: 0x10062eaac-0x10062f06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010062f038) */

undefined * FUN_10062eaac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  undefined *unaff_x19;
  ulong uVar16;
  long unaff_x21;
  
  puVar3 = (undefined1 *)0x1;
  FUN_10062f7e8();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  puVar4 = puVar3;
  FUN_10062f6bc();
  FUN_100006cdc();
  uVar1 = (uint)puVar4 & 0xff;
  if (uVar1 < 5) {
    if (uVar1 == 2) {
      uVar5 = 1;
      FUN_10062f7e8();
      uVar9 = uVar5;
      FUN_10062f6bc();
      FUN_100006cdc(uVar5,param_2);
      if (((uint)uVar9 >> 7 & 1) == 0) {
        puVar6 = (undefined *)(long)(int)(char)uVar9;
        FUN_10062f7e8(puVar6);
        return puVar6;
      }
      puVar10 = (undefined *)((ulong)(uint)(int)(char)uVar9 & 0x7f);
      FUN_10062f7e8(puVar10);
      puVar6 = puVar10;
      FUN_10062f8f4();
      FUN_100006cdc(puVar10,param_2);
      FUN_10062f7e8(puVar6);
      return puVar6;
    }
    if (uVar1 == 3) {
      uVar5 = 1;
      FUN_10062f7e8();
      uVar9 = uVar5;
      FUN_10062f6bc();
      FUN_100006cdc(uVar5,param_2);
      if (((uint)uVar9 >> 7 & 1) == 0) {
        uVar16 = (ulong)(int)(char)uVar9;
      }
      else {
        uVar11 = (ulong)(uint)(int)(char)uVar9 & 0x7f;
        FUN_10062f7e8();
        uVar16 = uVar11;
        FUN_10062f8f4();
        FUN_100006cdc(uVar11,param_2);
      }
      FUN_10062f7e8(1);
      FUN_100006cdc();
      puVar6 = (undefined *)(uVar16 - 1);
      if (!SBORROW8(uVar16,1)) {
        FUN_10062f7e8(puVar6);
        return puVar6;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f070);
      (*pcVar2)();
    }
    if (uVar1 == 4) {
      uVar5 = 1;
      FUN_10062f7e8();
      uVar9 = uVar5;
      FUN_10062f6bc();
      FUN_100006cdc(uVar5,param_2);
      if (((uint)uVar9 >> 7 & 1) == 0) {
        puVar6 = (undefined *)(long)(int)(char)uVar9;
        FUN_10062f7e8(puVar6);
        return puVar6;
      }
      puVar10 = (undefined *)((ulong)(uint)(int)(char)uVar9 & 0x7f);
      FUN_10062f7e8(puVar10);
      puVar6 = puVar10;
      FUN_10062f8f4();
      FUN_100006cdc(puVar10,param_2);
      FUN_10062f7e8(puVar6);
      return puVar6;
    }
  }
  else {
    if (uVar1 == 5) {
      FUN_10062f7e8(1);
      FUN_100006cdc();
      return (undefined *)0x0;
    }
    if (uVar1 == 6) {
      uVar5 = 1;
      FUN_10062f7e8();
      uVar9 = uVar5;
      FUN_10062f6bc();
      FUN_100006cdc(uVar5,param_2);
      if (((uint)uVar9 >> 7 & 1) == 0) {
        puVar6 = (undefined *)(long)(int)(char)uVar9;
        FUN_10062f7e8(puVar6);
        return puVar6;
      }
      puVar10 = (undefined *)((ulong)(uint)(int)(char)uVar9 & 0x7f);
      FUN_10062f7e8(puVar10);
      puVar6 = puVar10;
      FUN_10062f8f4();
      FUN_100006cdc(puVar10,param_2);
      FUN_10062f7e8(puVar6);
      return puVar6;
    }
    if (uVar1 == 0x30) {
      uVar5 = 1;
      FUN_10062f7e8();
      uVar9 = uVar5;
      FUN_10062f6bc();
      FUN_100006cdc(uVar5);
      if (((uint)uVar9 >> 7 & 1) == 0) {
        uVar16 = (ulong)(int)(char)uVar9;
        FUN_10062f7e8();
      }
      else {
        uVar11 = (ulong)(uint)(int)(char)uVar9 & 0x7f;
        FUN_10062f7e8();
        uVar16 = uVar11;
        FUN_10062f8f4();
        FUN_100006cdc(uVar11);
        FUN_10062f7e8();
      }
      lVar7 = 0;
      FUN_10062fb24();
      _swift_initStackObject();
      *(undefined8 *)(lVar7 + 0x18) = param_2;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(ulong *)(lVar7 + 0x10) = uVar16;
      uVar9 = param_2;
      FUN_100008184(uVar16);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        uVar12 = (uint)param_3;
        lVar13 = *(long *)(lVar7 + 0x10);
        uVar1 = (uint)(*(ulong *)(lVar7 + 0x18) >> 0x20);
        uVar15 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar15 == 0) {
            uVar11 = *(ulong *)(lVar7 + 0x18) >> 0x30 & 0xff;
          }
          else {
            iVar14 = (int)((ulong)lVar13 >> 0x20);
            if (SBORROW4(iVar14,(int)lVar13)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f068);
              (*pcVar2)();
            }
            uVar11 = (ulong)(iVar14 - (int)lVar13);
          }
LAB_10062ec8c:
          if ((long)uVar11 <= *(long *)(lVar7 + 0x20)) goto LAB_10062f00c;
        }
        else {
          if (uVar15 == 2) {
            uVar11 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
            if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f06c);
              (*pcVar2)();
            }
            goto LAB_10062ec8c;
          }
          if (-1 < *(long *)(lVar7 + 0x20)) {
LAB_10062f00c:
            FUN_100006cdc(uVar16,param_2);
            _swift_setDeallocating(lVar7);
            FUN_100006cdc(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
            return puVar6;
          }
        }
        lVar13 = lVar7;
        FUN_10062eaac();
        FUN_10062e3d0();
        puVar10 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar6;
        if (((ulong)puVar10 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100629a24(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar11 = *(ulong *)(puVar8 + 0x10);
        puVar6 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100629a24(puVar6,uVar11 + 1,1,puVar8);
        }
        *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
        *(long *)(puVar6 + uVar11 * 0x18 + 0x20) = lVar13;
        *(undefined8 *)(puVar6 + uVar11 * 0x18 + 0x28) = uVar9;
        param_3 = (ulong)(uVar12 & 1);
        puVar6[uVar11 * 0x18 + 0x30] = (char)(uVar12 & 1);
        FUN_10062e434(lVar13);
      } while( true );
    }
  }
  FUN_10062f070();
  _swift_allocError(&DAT_1009e1518,puVar3,0,0);
  *puVar3 = (char)puVar4;
  puVar3[1] = 0;
  _swift_willThrow();
  return puVar4;
}

