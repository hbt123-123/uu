// rea decompile_all
// name: FUN_10011c6b8
// address: 0x10011c6b8
// body: available
// range: 0x10011c6b8-0x10011cb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10011c6b8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  do {
    uVar5 = *(ulong *)((long)&DAT_100a74468 + lVar10);
    if ((uVar5 & (param_1 ^ 0xffffffffffffffff)) == 0) {
      if ((long)uVar5 < 0x80000) {
        if (uVar5 == 0x10000) {
          puVar2 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar3 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar3 = (undefined *)0x0;
            FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
          }
          uVar5 = *(ulong *)(puVar3 + 0x10);
          lVar9 = uVar5 + 1;
          if (uVar5 < *(ulong *)(puVar3 + 0x18) >> 1) {
            uVar6 = 0x39;
            puVar4 = puVar3;
          }
          else {
            puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
            FUN_100034a14(puVar4,lVar9,1,puVar3);
            uVar6 = 0x39;
          }
        }
        else if (uVar5 == 0x20000) {
          puVar2 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar3 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar3 = (undefined *)0x0;
            FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
          }
          uVar1 = *(ulong *)(puVar3 + 0x10);
          uVar7 = *(ulong *)(puVar3 + 0x18);
          uVar8 = uVar7 >> 1;
          uVar5 = uVar1 + 1;
          puVar2 = puVar3;
          if (uVar8 <= uVar1) {
            puVar2 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar2,uVar5,1,puVar3);
            uVar7 = *(ulong *)(puVar2 + 0x18);
            uVar8 = uVar7 >> 1;
          }
          *(ulong *)(puVar2 + 0x10) = uVar5;
          *(undefined8 *)(puVar2 + uVar1 * 8 + 0x20) = 0x38;
          lVar9 = uVar1 + 2;
          if ((long)uVar8 < lVar9) {
            puVar4 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar4,lVar9,1,puVar2);
            uVar6 = 0x3c;
          }
          else {
            uVar6 = 0x3c;
            puVar4 = puVar2;
          }
        }
        else {
          if (uVar5 != 0x40000) goto LAB_10011c70c;
          puVar2 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar3 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar3 = (undefined *)0x0;
            FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
          }
          uVar1 = *(ulong *)(puVar3 + 0x10);
          uVar7 = *(ulong *)(puVar3 + 0x18);
          uVar8 = uVar7 >> 1;
          uVar5 = uVar1 + 1;
          puVar2 = puVar3;
          if (uVar8 <= uVar1) {
            puVar2 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar2,uVar5,1,puVar3);
            uVar7 = *(ulong *)(puVar2 + 0x18);
            uVar8 = uVar7 >> 1;
          }
          *(ulong *)(puVar2 + 0x10) = uVar5;
          *(undefined8 *)(puVar2 + uVar1 * 8 + 0x20) = 0x3b;
          lVar9 = uVar1 + 2;
          puVar4 = puVar2;
          if ((long)uVar8 < lVar9) {
            puVar4 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar4,lVar9,1,puVar2);
          }
          uVar6 = 0x3e;
        }
      }
      else if ((long)uVar5 < 0x400000) {
        if (uVar5 == 0x80000) {
          puVar2 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar3 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar3 = (undefined *)0x0;
            FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
          }
          uVar1 = *(ulong *)(puVar3 + 0x10);
          uVar7 = *(ulong *)(puVar3 + 0x18);
          uVar8 = uVar7 >> 1;
          uVar5 = uVar1 + 1;
          puVar2 = puVar3;
          if (uVar8 <= uVar1) {
            puVar2 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar2,uVar5,1,puVar3);
            uVar7 = *(ulong *)(puVar2 + 0x18);
            uVar8 = uVar7 >> 1;
          }
          *(ulong *)(puVar2 + 0x10) = uVar5;
          *(undefined8 *)(puVar2 + uVar1 * 8 + 0x20) = 0x3a;
          lVar9 = uVar1 + 2;
          if ((long)uVar8 < lVar9) {
            puVar4 = (undefined *)(ulong)(1 < uVar7);
            FUN_100034a14(puVar4,lVar9,1,puVar2);
            uVar6 = 0x3d;
          }
          else {
            uVar6 = 0x3d;
            puVar4 = puVar2;
          }
        }
        else {
          if (uVar5 != 0x100000) goto LAB_10011c70c;
          puVar2 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar3 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar3 = (undefined *)0x0;
            FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
          }
          uVar5 = *(ulong *)(puVar3 + 0x10);
          lVar9 = uVar5 + 1;
          puVar4 = puVar3;
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
            puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
            FUN_100034a14(puVar4,lVar9,1,puVar3);
          }
          uVar6 = 0x37;
        }
      }
      else if (uVar5 == 0x400000) {
        puVar2 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar3 = puVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = (undefined *)0x0;
          FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar5 = *(ulong *)(puVar3 + 0x10);
        lVar9 = uVar5 + 1;
        if (uVar5 < *(ulong *)(puVar3 + 0x18) >> 1) {
          uVar6 = 0x72;
          puVar4 = puVar3;
        }
        else {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          FUN_100034a14(puVar4,lVar9,1,puVar3);
          uVar6 = 0x72;
        }
      }
      else {
        if (uVar5 != 0x800000) goto LAB_10011c70c;
        puVar2 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar3 = puVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = (undefined *)0x0;
          FUN_100034a14(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar5 = *(ulong *)(puVar3 + 0x10);
        lVar9 = uVar5 + 1;
        puVar4 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          FUN_100034a14(puVar4,lVar9,1,puVar3);
        }
        uVar6 = 0x3f;
      }
      *(long *)(puVar4 + 0x10) = lVar9;
      *(undefined8 *)(puVar4 + uVar5 * 8 + 0x20) = uVar6;
    }
LAB_10011c70c:
    lVar10 = lVar10 + 8;
    if (lVar10 == 0x38) {
      return puVar4;
    }
  } while( true );
}

